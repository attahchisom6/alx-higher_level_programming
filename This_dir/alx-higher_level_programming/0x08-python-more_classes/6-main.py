#!/usr/bin/python3

Rectangle = __import__("6-rectangle").Rectangle

my_rect_1 = Rectangle(2, 4)
my_rect_2 = Rectangle(2, 4)

print("{:d} number of instances".format(Rectangle.number_of_instances))

del my_rect_1
print("{:d} number of instances".format
(Rectangle.number_of_instances))

del my_rect_2
print("{:d} number of instances".format(Rectangle.number_of_instances))
