#!/usr/bin/python3
"""printing a square"""


class Square:
    """define a square a class"""

    def __init__(self, size=0):
        """initializing an object to store square size

        Args:
            @self
            @size
        """

        """Note: since it's stated that size in this initialization is
        optional, u can use, size for public or __size for private if u want"""
        self.size = size

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

    def area(self):
        return (self.__size ** 2)

    def my_print(self):
        if self.__size == 0:
            print("")
        else:
            p = 0
            while p < self.__size:
                k = 0
                while k < self.__size:
                    print("#", end="")
                    k = k + 1
                p = p + 1
                print()
