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
        """its good"""
        if type(value) is not int:
            raise TypeError("{} must be an integer".format(name))
        if value <= 0:
            raise ValueError("{} must be greater than 0".format(value))
