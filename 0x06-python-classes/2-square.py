#!/usr/bin/python3


class Square:
    """A class that defines a square"""
    def __init__(self, size=0):
        """initialise an object to hold the size of the square

        Args:
            integer argument size
        """
        if type(size) != int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size
