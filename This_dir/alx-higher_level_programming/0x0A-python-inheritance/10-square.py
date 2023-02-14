#!/usr/bin/python3

"""
defining a grandchild of BaseGeometry and child of Rectangle
"""
Rectangle = __import__("9-rectangle").Rectangle


class Square(Rectangle):
    """A class inherit from Rectangle
    """
    def __init__(self, size):
        self.integer_validator("size", size)
        self.__size = size
        super().__init__(self.__size, self.__size)

    def area(self):
        return (super().area())
