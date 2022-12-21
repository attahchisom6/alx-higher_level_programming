#!/usr/bin/python3
"""Square module.

This module contains a class that defines a square and its size and its
position on the screen, checking if the given values are right, and a setter
and getter methods to set or get them. There's also an area method that returns
the area of the square, another one that handles the print of the square.

"""


class Square:
    """defining a square class"""

    def __init__(self, size=0, position=(0, 0)):
        """initializing an object to store size of the square and the co-or
        dinate position, it occured

        Args:
            @self:parameter to create an instance of the class
            @size:size of one side of the square
            @position:co-ordinate of the square
        """

        self.__size = size
        self.__position = position

    """private instance of the size variable"""
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

    """private instance of the positional cordinate"""
    @property
    def position(self):
        return (self.__position)

    @position.setter
    def position(self, value):
        if type(value) is not tuple or len(value) != 2 or \
            type(value[0]) is not int or type(value[1]) is not int or \
                value[0] < 0 or value[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")
        else:
            self.__position = value

    """public instances"""
    def area(self):
        return (self.__size ** 2)

    def my_print(self):
        if self.__size <= 0:
            print()
        else:
            x = self.__position[0]
            y = self.__position[1]
            n = self.__size

            for p in range(y):
                print("")
            for k in range(n):
                print(" " * x, end="")
                print("#" * n, end="")

                print()
