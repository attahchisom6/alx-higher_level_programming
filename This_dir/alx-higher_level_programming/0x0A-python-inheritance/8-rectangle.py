#!/usr/bin/python3

"""
Defining a aubclass
"""
BaseGeometry = __import__("7-base_geometry").BaseGeometry


class Rectangle(BaseGeometry):
    """derived class from BaseGeometr"""
    def __init__(self, width, height):
        """initializing child instancs"""
        self.__width = BaseGeometry.integer_validator(self, "width", width)
        self.__height = BaseGeometry.integer_validator(self, "height", height)
