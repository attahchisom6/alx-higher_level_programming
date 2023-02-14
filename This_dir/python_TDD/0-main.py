#!/usr/bin/python3

add_integer = __import__("0-add_integer").add_integer

print(add_integer(2, 4))
print(add_integer(0))
print(add_integer(3, 97))
print(add_integer(2))
print(add_integer(100.3))

try:
    print(add_integer("school", 4))
except Exception as e:
    print(e)
try:
    print(add_integer(4, "school"))
except Exception as e:
    print(e)
