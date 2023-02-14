#!/usr/bin/python3

"""
Defining a class
"""


class BaseGeometry:
    """An empty geometrical class
    """

    def area(self):
        msg = "area() is not implemented"
        raise Exception(msg)

    def integer_validator(self, name, value):
        self.name = name
        self.value = value
        if type(value) is not int:
            raise TypeError(self.name + " must be an integer")
        elif value <= 0:
            raise ValueError(self.name + " must be greater than 0")
