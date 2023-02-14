#!/usr/bin/python3

Rectangle = __import__("4-rectangle").Rectangle

my_rect = Rectangle(2, 4)
print(str(my_rect))
print("----")
print(my_rect)
print("----")
print(repr(my_rect))
print("----")
print(hex(id(my_rect)))
print("----")

new_rect = eval(repr(my_rect))
print(str(new_rect))
print("----")
print(new_rect)
print("----")
print(repr(new_rect))
print(hex(id(new_rect)))
print("----")

print(my_rect is new_rect)
print(type(my_rect) is type(new_rect))
