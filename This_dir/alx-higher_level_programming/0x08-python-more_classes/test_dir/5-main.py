#!/usr/bin/python3

Rectangle = __import__("5-rectangle").Rectangle

my_rect = Rectangle(2, 4)
print("Area: {} - Perimeter: {}".format(my_rect.area(), my_rect.perimeter()))
del my_rect
try:
    print(my_rect)
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))
