#!/usr/bin/python3
""" This module defines a square. """


class Square:
    """ Defines a square. """
    def __init__(self, size=0, position=(0, 0)):
        """ Initializes the data. """
        self.size = size
        self.position = position

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

    @property
    def position(self):
        """ Retrieve position. """
        return self.__position

    @position.setter
    def position(self, value):
        """ Set property. """
        self.__position = value
        if type(value) != tuple or len(value) != 2:
            raise TypeError("position must be a tuple of 2 positive integers")
        i, j = value
        if type(i) != int or type(j) != int:
            raise TypeError("position must be a tuple of 2 positive integers")
        if i < 0 or j < 0:
            raise TypeError("position must be a tuple of 2 positive integers")

    def area(self):
        """ Returns the current square area. """
        return self.__size ** 2

    def my_print(self):
        """ Print to STDOUT. """
        if self.__size == 0:
            print('')
            return

        for i in range(self.__position[1]):
            print('')
        for i in range(self.__size):
            print("{}{}".format(' ' * self.__position[0], '#' * self.__size))

    def __str__(self):
        """ Returns a string to print to STDOUT. """
        str = ''
        if self.__size == 0:
            return str

        for i in range(self.__position[1]):
            str += '\n'
        for i in range(self.__size):
            str += "{}{}".format(' ' * self.__position[0], '#' * self.__size)
            if i + 1 != self.__size:
                str += '\n'
        return str
