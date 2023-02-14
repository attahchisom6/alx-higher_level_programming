#!/usr/bin/python3
from console import HBNBCommand
import shlex

new = HBNBCommand()

def testline(line):
    """test a line"""
    if line is None or line == "":
        new.do_update(line)
        return False

    line = line.strip()
    args = line.split(".")
    if len(args) != 2:
        new.default(args)
        return False

    classname = args[0]
    command_in_list = args[1].split("(")
    command = command_in_list[0]
    line = ""
    if command == "update" and command_in_list[1][-2] == "}":
        ids_in_list = command_in_list[1].split(",", 1)
        ids = shlex.split(ids_in_list[0])[0]
        ids_in_list[0] = ids
        line = "".join(ids_in_list)[0:-1]
        line = classname + " " + line
        new.do_update2(line.strip())

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

    line = classname + line
    return (line.strip())

if __name__ == "__main__":
    inputs = "User.update('ids', {'h': 'w', 'num': 89})"
    line = testline(inputs)
    print(line)
