#!/usr/bin/python3
""" This module defines a Rectangle. """


class Rectangle:
    """ Defines a Rectangle. """
    number_of_instances = 0
    print_symbol = '#'  # Used as symbol for string representation

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
        ret = ''
        if self.__width == 0 or self.__height == 0:
            return ret

        for i in range(self.__height):
            # cast print symbol as a string as it could be of any type
            ret += str(self.print_symbol) * self.__width
            if (i + 1) != self.__height:
                ret += '\n'
        return ret

    def __repr__(self):
        """ Returns an object representation in the form of a string. """
        return f"{self.__class__.__name__}({self.width}, {self.height})"

    def __del__(self):
        """ Instance deletion. """
        print("Bye rectangle...")
        self.__class__.number_of_instances -= 1

    @staticmethod
    def bigger_or_equal(rect_1, rect_2):
        """ Returns the biggest rectangle based on the area. """
        if type(rect_1) != Rectangle:
            raise TypeError('rect_1 must be an instance of Rectangle')
        if type(rect_2) != Rectangle:
            raise TypeError('rect_2 must be an instance of Rectangle')
        if Rectangle.area(rect_1) == Rectangle.area(rect_2):
            return rect_1  # both have the same area value
        if Rectangle.area(rect_1) > Rectangle.area(rect_2):
            return rect_1  # area of rect_1 is bigger
        if Rectangle.area(rect_1) < Rectangle.area(rect_2):
            return rect_2  # area of rect_2 is bigger

    @classmethod
    def square(cls, size=0):
        """ Returns a new Rectangle instance. """
        width = height = size
        new = cls(width, height)
        return new
