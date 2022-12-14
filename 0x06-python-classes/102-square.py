#!/usr/bin/python3

"""Define a class Square."""


class Square:
    """A square class"""

    def __init__(self, size=0):
        """creating object to store square size

        Args:
            @self:class object initiator
            @size:a length of the squarre
        """

        self.size = size

    @property
    def size(self):
        return (self.__size)

    @size.setter
    def size(self, value):
        if type(value) is not int:
            raise TypeError("size must be a number")
        elif value < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = value

    def area(self):
        return (self.__size ** 2)

    """Comparison methods"""
    def __lt__(self, area_1):
        return (self.area() < area_1.area())

    def __le__(self, area_1):
        return (self.area() <= area_1.area())

    def __eq__(self, area_1):
        return (self.area() == area_1.area())

    def __ne__(self, area_1):
        return (self.area() != area_1.area())

    def __gt__(self, area_1):
        return (self.area() > area_1.area())

    def __ge__(self, area_1):
        return (self.area() >= area_1.area())
