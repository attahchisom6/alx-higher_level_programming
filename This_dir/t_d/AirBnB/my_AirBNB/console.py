#!/usr/bin/python3
"""Class to crate our command interpreter"""
import cmd
import json
import shlex
from models.base_model import BaseModel
from models import storage
from models.engine.file_storage import FileStorage
from models.user import User
from models.state import State
from models.city import City
from models.place import Place
from models.amenity import Amenity
from models.review import Review


class HBNBCommand(cmd.Cmd):
    """command line interpreter to handle classes and child classes"""

    prompt = "(hbnb) "

    command_list = [
            "create", "destroy", "show", "update", "all", "count"
            ]

    def default(self, line):
        """this will provide another way to parse our command
        including when we pass a dictionary as argument"""

        console_dict = {
                "all": self.do_all,
                "show": self.do_show,
                "update": self.do_update,
                "count": self.do_count,
                "create": self.do_create,
                "destroy": self.do_destroy
                }

        line = line.strip()
        if line is None or line == "":
            self.do_update(line)
            return False

        args = line.split(".")
        if len(args) != 2:
            cmd.Cmd.default(self, args)
            return (False)

        classname = args[0]
        command_in_list = args[1].split("(")
        command = command_in_list[0]

        line = ""
        if command == "update" and command_in_list[1][-2] == "}":
            ids_in_list = command_in_list[1].split(",", 1)
            ids = shlex.split(ids_in_list[0])[0]
            ids_in_list[0] = ids
            line = "".join(ids_in_list)[0:-1]
            line = "{} {}".format(classname, line)
            self.do_update2(line.strip())
            return False

        try:
            inputs = command_in_list[1].split(",")
            for k in range(len(inputs)):
                if k != len(inputs) - 1:
                    line = line + " " + shlex.split(inputs[k])[0]
                else:
                    line = line + " " + shlex.split(inputs[k][0:-1])[0]
        except IndexError:
            line = ""
            inputs = ""

        line = "{}{}".format(classname, line)
        if command in console_dict.keys():
            console_dict[command](line.strip())

    def do_EOF(self, line):
        """this will signal the end of the readline
        and hence loop out of the shell"""
        return (True)

    def help_EOF(self):
        """print EOF  help msg"""
        print("EOF command to exit the problem")

    def do_quit(self, line):
        """Quit command to exit the program"""
        return (True)

    def help_quit(self):
        """help message"""
        print("Quit command to exit the program")

    def emptyline(self):
        """pressing the ENTER key wouldn't execute anything"""
        pass

    def do_create(self, classname):
        """this command will create a new instance of BaseModel"""
        if classname == "" or classname is None:
            print("** class name missing **")
        elif classname not in storage.data_classes():
            print("** class doesn't exist **")
            return (False)
        else:
            new_obj = storage.data_classes()[classname]()
            new_obj.save()
            print(new_obj.id)

    def help_create(self):
        """help message"""
        print("Enter create command to cerate an instance")

    def do_show(self, line):
        """Prints the string representation of an instance based
        on the class name and id"""
        arg = line.split(" ")
        if arg[0] == "" or arg[0] is None:
            print("** class name missing **")
            return False
        elif not arg[0] in storage.data_classes():
            print("** class doesn't exist **")

        elif len(arg) < 2:
            print("** instance id missing **")

        else:
            all_obj = storage.all()
            key = "{}.{}".format(arg[0], arg[1])
            if key not in all_obj.keys():
                print("** no instance found **")
            else:
                print(all_obj[key])
                return False

    def help_show(self):
        """help message"""
        print("Enter show command to display instances \
                in string format")

    def do_destroy(self, line):
        """Deletes an instance based on the class name and id
        save the change into the JSON file"""
        arg = line.split(" ")
        if arg[0] == "" or arg[0] is None:
            print("** class name missing **")
        elif not arg[0] in storage.data_classes():
            print("** class doesn't exist **")
            return (False)

        elif len(arg) < 2:
            print("** instance id missing **")
            return (False)

        else:
            all_obj = storage.all()
            key = "{}.{}".format(arg[0], arg[1])
            if key not in all_obj.keys():
                print("** no instance found **")
            else:
                del all_obj[key]
                storage.save()

    def help_destroy(self):
        """help message"""
        print("Enter destroy command to delete an instance")

    def do_all(self, line):
        """Prints all string representation of all instances
        based or not on the class name
        """
        if line != "":
            arg = line.split(" ")
            if not arg[0] in storage.data_classes():
                print("** class doesn't exist **")
            else:
                str_obj = [
                        str(obj) for key, obj in storage.all().items()
                        if obj.__class__.__name__ == arg[0]
                        ]
                print(str_obj)
        else:
            str_obj = [str(obj) for key, obj in storage.all()]
            print(str_obj)

    def help_all(self):
        """help message"""
        print("Enter all command to display all instances \
                in string format")

    def do_update(self, line):
        """Updates an instance based on the class name and id by adding
        or updating attribute (save the change into the JSON file)"""
        if line == "" or line is None:
            print("** class name missing **")
            return False

        strr = ""
        for args in line.split(","):
            strr = strr + args

        arg = shlex.split(strr)
        if arg[0] not in storage.data_classes():
            print("** class doesn't exist **")
            return False

        elif len(arg) == 1:
            print("** instance id missing **")
            return (False)
        else:
            all_obj = storage.all()
            for key, obj in all_obj.items():
                classname = obj.__class__.__name__
                obj_idx = obj.id
                if classname == arg[0] and obj_idx == arg[1].strip('"'):
                    if len(arg) == 2:
                        print("** attribute name missing **")

                    elif len(arg) == 3:
                        print(" ** value missing **")
                    else:
                        setattr(obj, arg[2], arg[3])
                        storage.save()
                    return False
            print("** instance id missing **")

    def do_update2(self, line):
        """update a instance based on a dictiobnary object"""
        if line is None or line == "":
            print("** class name missing **")
            return False

        strr_dict = "{" + line.split("{")[1]
        arg = shlex.split(line)
        storage.reload()
        all_obj = storage.all()

        if arg[0] not in storage.data_classes():
            print("** class dosen't exit **")
            return False

        if arg[2] == "{":
            print("** attribute name missing **")

        try:
            key = "{}.{}".format(arg[0], arg[1])
            all_obj[key]
        except KeyError:
            print("** No instance found **")
            return False

        strr_dict = strr_dict.replace("\'", "\"")
        my_dict = json.loads(strr_dict)
        class_obj = all_obj[key]
        for cls_key in my_dict.keys():
            if hasattr(class_obj, cls_key):
                setattr(class_obj, cls_key, my_dict[cls_key])
            else:
                setattr(class_obj, cls_key, my_dict[cls_key])
        storage.save()
        return False

    def help_update(self):
        """help message"""
        print("Enter update command to update and set class attributes")

    def do_count(self, arg):
        """this command method will count the number of instances a class
        at a particular time
        """
        count = 0
        all_obj = storage.all()
        for key in all_obj.keys():
            key_class = key.split(".")[0]
            if key_class == arg:
                count = count + 1
        print(count)

    def help_count(self):
        """help mwssage"""
        print("Enter the count command to get the number of instances \
                in the class")


if __name__ == "__main__":
    HBNBCommand().cmdloop()
