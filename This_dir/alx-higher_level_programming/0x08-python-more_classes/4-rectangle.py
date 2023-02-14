#!/usr/bin/python3

"""defining a rectangular class"""


class Rectangle:
    """initialuzing a rectangle"""

    def __init__(self, width=0, height=0):
        """initializing a rectanular object

        Args:
            @width:horizontal length
            @height:vertical length
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
            raise ValueError("width must be an integer")
        elif value < 0:
            raise ValueError("width must be an integer")
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
            raise TypeError("height must be >= 0")
        else:
            self.__height = value

    """public instances"""
    def area(self):
        return (self.__height * self.__width)

    def perimeter(self):
        p = 2 * (self.__width + self.__height)
        if self.__width == 0 or self.__height == 0:
            p = 0
        return (p)

    def __str__(self):
        if self.__width == 0 or self.__height == 0:
            return ""
        else:
            x = self.__width
            y = self.__height
            str = ""

            for p in range(y):
                for k in range(x):
                    str = str + "#"
                str = str + "\n"
            return (str[:-1])

    def __repr__(self):
        repr = "Rectangle({}, {})".format(self.__width, self.__height)
        return (repr)
