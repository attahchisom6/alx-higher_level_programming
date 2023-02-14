#!/usr/bin/python3
""" This module defines a Circle. """
import math


class MagicClass:
    """ Define a Circle """
    def __init__(self, radius=0):
        """ Initialize data. """
        self.radius = 0
        if type(radius) is not int and type(radius) is not float:
            raise TypeError('radius must be a number')
        self.radius = radius

    def area(self):
        """ Area of Circle. """
        return (self.radius ** 2) * math.pi

    def circumference(self):
        """ Circumference of Circle. """
        return (2 * math.pi) * self.radius
