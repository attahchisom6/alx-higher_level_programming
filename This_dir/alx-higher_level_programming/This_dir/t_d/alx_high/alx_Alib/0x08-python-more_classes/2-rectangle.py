#!/usr/bin/python3
""" This module defines a Rectangle. """


class Rectangle:
    """ Defines a Rectangle. """
    def __init__(self, width=0, height=0):
        """ Initialize data. """
        self.width = width
        self.height = height

    @property
    def width(self):
        """ Retrieve width. """
        return self.__width

    @width.setter
    def width(self, value):
        """ Set property. """
        if type(value) != int:
            raise TypeError('width must be an integer')
        if value < 0:
            raise ValueError('width must be >= 0')
        self.__width = value

    @property
    def height(self):
        """ Retrieve height. """
        return self.__height

    @height.setter
    def height(self, value):
        """ Set property. """
        if type(value) != int:
            raise TypeError('height must be an integer')
        if value < 0:
            raise ValueError('height must be >= 0')
        self.__height = value

    def area(self):
        """ Returns the rectangle area. """
        return (self.width * self.height)

    def perimeter(self):
        """ Returns the rectangle perimeter. """
        if self.__width == 0 or self.__height == 0:
            return 0
        else:
            return 2 * (self.width + self.height)
