#!/usr/bin/python3
"""square class"""


class Square:
    """Defining a square class"""

    def __init__(self, size=0):
        """initializing object variable to store aquare size

        Args:
            @sef
            @size
        """

        if type(size) is not int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size

        def area(self):
            return (sef.__size ** 2)
