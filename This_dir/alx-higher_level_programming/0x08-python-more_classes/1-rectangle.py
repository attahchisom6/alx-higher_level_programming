#!/usr/bin/python3

"""defining a rectangular class"""


class Rectangle:
    """A rectangular class"""

    def __init__(self, width=0, height=0):
        """initualuzing a rectangular clas

        Args:
            @width:cross length of the rectangle
         @height:vertical length of the rectangle
        """

        self.width = width
        self.height = height

    """private instances"""
    @property
    def width(self):
        return (self.__width)

    @width.setter
    def width(self, value):
        if type(value) is not int:
            raise TypeError("width must be an integer")
        elif value < 0:
            raise ValueError("width must be >= 0")
        else:
            self.__width = value

    @property
    def height(self):
        return (self.__height)

    @height.setter
    def height(self, value):
        if type(value) is not int:
            raise TypeError("height must be an integer")
        elif value < 0:
            raise ValueError("height must be >= 0")
        else:
            self.__height = value
