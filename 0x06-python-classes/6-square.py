#!/usr/bin/python3
"""Square module.

This module contains a class that defines a square and its size and its
position on the screen, checking if the given values are right, and a setter
and getter methods to set or get them. There's also an area method that returns
the area of the square, another one that handles the print of the square.

"""


class Square():
    """defining a square"""

    def __init__(self, size=0, position=(0, 0)):
        """initializing a class object that stores the length of a square
        and its coordinate(losition)

        Args:
            @self: class object initializer
            @size:length of the square
        """

        self.size = size
        self.position = position

    """private instances"""
    @property
    def size(self):
        return (self.__size)

    @size.setter
    def size(self, value):
        if type(value) is not int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = value

    @property
    def position(self):
        return (self.__position)

    @position.setter
    def position(self, value):
        if type(value) is not tuple or len(value) != 2 or \
                type(value[0]) is not int or value[0] < 0 or \
                type(value[1]) is not int or value[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")
        else:
            self.__position = value

    """public instances"""
    def area(self):
        return (self.__size ** 2)

    def my_print(self):
        if self.__size == 0:
            print("")
        else:
            x = self.__position[0]
            y = self.__position[1]
            z = self.__size

            for p in range(y):
                print("")
            for k in range(z):
                print(" " * x, end="")
                print("#" * z)
