#!/usr/bin/python3
""" This module defines a Rectangle. """


class Rectangle:
    """ Defines a Rectangle. """
    number_of_instances = 0

    def __init__(self, width=0, height=0):
        """ Initialize data. """
        self.width = width
        self.height = height
        self.__class__.number_of_instances += 1

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

    def __str__(self):
        """ Returns a string to print to STDOUT. """
        str = ''
        if self.__width == 0 or self.__height == 0:
            return str

        for i in range(self.__height):
            str += "{}".format('#' * self.__width)
            if (i + 1) != self.__height:
                str += '\n'
        return str

    def __repr__(self):
        """ Returns an object representation in the form of a string. """
        return f"{self.__class__.__name__}({self.width}, {self.height})"

    def __del__(self):
        """ Instance deletion. """
        print("Bye rectangle...")
        self.__class__.number_of_instances -= 1
