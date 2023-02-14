#!/usr/bin/python3

"""Define a class Square."""


class Square:
    """creating a square class"""

    def __init__(self, size=0, position=(0, 0)):
        """initializing an object to store a lenth of a square

        Args:
            @self:object initiator
            @size:a length of the square
            @position:co-ordinate to print the aquare
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
            print()
        else:
            x = self.__position[0]
            y = self.__position[1]
            z = self.__size

            for p in range(y):
                print("")
            for k in range(z):
                print(" " * x, end="")
                print("#" * z)

    def __str__(self):
        u = self.__position[0]
        v = self.__position[1]
        w = self.__size

        if w > 0:
            for p in range(v):
                print("")
        for k in range(w):
            print(" " * u, end="")
            print("#" * w, end="")
            if k != w - 1:
                print()

        return ("")
