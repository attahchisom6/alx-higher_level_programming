#!/usr/bin/python3
""" This module defines a square. """


class Square:
    """ Defines a square. """
    def __init__(self, size=0):
        """ Initializes the data. """
        self.__size = size

    @property
    def size(self):
        """ Retrieve size. """
        return self.__size

    @size.setter
    def size(self, value):
        """ Set property. """
        self.__size = value
        if type(value) is not int:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        """ Returns the current square area. """
        return self.__size ** 2

    def my_print(self):
        """ Prints in stdout the square with the character #. """
        num = self.__size
        if num == 0:
            print()  # newline
        for i in range(num):
            for j in range(num):
                print("#", end="")
            print()  # newline
