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


"""hello world"""


class Rectangle(BaseGeometry):
    """derived class from BaseGeometr"""
    def __init__(self, width, height):
        """initializing child instancs"""
        self.integer_validator("width", width)
        self.integer_validator("height", height)
        self.__width = width
        self.__height = height
