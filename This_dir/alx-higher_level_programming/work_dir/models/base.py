#!/usr/bin/python3

"""defining a class"""
import json
import csv
#import turtle
import os.path


class Base:
    """Defininga a base clas
    a private attribute
    """
    __nb_objects = 0

    def __init__(self, id=None):
        """class constructor"""
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries=[{}]):
        if list_dictionaries is None or list_dictionaries == []:
            return "[]"
        lt_dict = json.dumps(list_dictionaries)
        return (lt_dict)

    @classmethod
    def save_to_file(cls, list_objs=[]):
        filename = "{}.json".format(cls.__name__)
        dict_objs = []
        if list_objs is None or list_objs == []:
            with open(filename, "w") as f:
                f.write("[]")
        else:
            """convert each item in the list to a dictionary"""
            for k in range(len(list_objs)):
                dictt = list_objs[k].to_dictionary()
                dict_objs.append(dictt)
            jstr_L = cls.to_json_string(dict_objs)
            with open(filename, "w") as f:
                f.write(jstr_L)

    @staticmethod
    def from_json_string(json_string):
        jstr_L = []
        if json_string is None or json_string == []:
            return []
        jstr_L = json.loads(json_string)
        return (jstr_L)

    @classmethod
    def create(cls, **dictionary):
        """Returns an instabmnce of the class including instances of its
        child coasses with all their attribute already set
        Args:
            @dictionary: dictiobary with all attribute of the object
            already set
        """
        if cls.__name__ == "Rectangle":
            dummy = cls(1, 1)
        elif cls.__name__ == "Square":
            dummy = cls(1)
        dummy.update(**dictionary)
        return (dummy)

    @classmethod
    def load_from_file(cls):
        obj_L = []
        filename = "{}.json".format(cls.__name__)
        if os.path.exists(filename) is False:
            return []
        else:
            with open(filename, "r") as f:
                jstr_L = f.read()

                list_dict = cls.from_json_string(jstr_L)
                for items in list_dict:
                    dictt_obj = cls.create(**items)
                    obj_L.append(dictt_obj)
            return (obj_L)

    @classmethod
    def save_to_file_csv(cls, list_objs):
        """function to serialize objects in csv format and save it
        to a file
        """
        list_data = []
        filename = "{}.csv".format(cls.__name__)

        if list_objs is None or list_objs == []:
            return []

        rect_field = ['id', 'width', 'height', 'x', 'y']
        sq_field = ['id', 'size', 'x', 'y']
        for obj in list_objs:
            dictt = obj.to_dictionary()
            list_data.append(dictt)
        with open(filename, "w") as f:
            if cls.__name__ == "Rectangle":
                csv_data = csv.DictWriter(f, fieldnames=rect_field)
            elif cls.__name__ == "Square":
                csv_data = csv.DictWriter(f, fieldnames=sq_field)

            csv_data.writeheader()
            csv_data.writerows(list_data)
        return (list_data)

    @classmethod
    def load_from_file_csv(cls):
        """function to deserialize data from a csv file into objects

        Return: a list of objects
        """
        obj_L = []
        filename = "{}.csv".format(cls.__name__)
        if os.path.exists(filename) is False:
            return []

        with open(filename, "r") as f:
            result = csv.DictReader(f)
            for row in result:
                row = dict(row)
                for key in row:
                    row[key] = int(row[key])
                obj = cls.create(**row)
                obj_L.append(obj)
            return (obj_L)

    @staticmethod
    def draw(list_rectangles, list_squares):
        """method to draw the shape of an instance of a class
        the turtl module can help in doing this

        Args:
            @list_rectangles: a list if rectangular instances
            @list_squares: a list of square instances
        """
        # open screen and set the turtle inm the centre
        s = turtle.getscreen()
        t = turtle.Turtle()

        # printing a title to the screen
        turtle.title("my first draw with python, Alx is cool")

        # customize turtle and screen background
        turtle.shape("turtle")
        turtle.bgcolor("green")

        # customize pen for rectangle
        t.pen(pencolor="purple", fillcolor="black", pensize=4, speed=1)

        # extract data from the object rectangular list
        for obj in list_rectangles:
            t.pen(pencolor="purple", fillcolor="black", pensize=4, speed=1)
            data = obj.to_dictionary()

            # set the position in relation to the rectangle
            t.home()
            t.setpos(data['x'], data['y'])

            # draw the process
            t.pd()
            for k in range(2):
                t.foward(data['width'])
                t.left(90)
                t.forward(data['height'])
                t.left(90)
            t.pu()

        # customize color for Square
        t.pen(pencolor="blue", fillcolor="black", pensize=4, speed=0.5)

        # get square objects from list_squares
        for obj in list_squares:
            # customizing aquare pen
            t.pen(pencolor="blue", fillcolor="black", pensize=4, speed=0.5)
            data = obj.to_dictionary()

            # set position in relation to the square object
            t.home()
            t.setpos(data['x'], data['y'])

            # draw the process
            t.pd()
            for k in range(4):
                t.foward(data['size'])
                t.left(90)
            t.pu()

        #keep the window open
        turtle.getscreen()._root.mainloop()
