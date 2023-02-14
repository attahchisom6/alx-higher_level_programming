#!/usr/bin/python3

"""making size private"""


class Square:
    """square class that defines a square"""
    def __init__(self, size):
        """initializing an instant of the class

        args:
            size: integer argument
        """
        self.__size = size
