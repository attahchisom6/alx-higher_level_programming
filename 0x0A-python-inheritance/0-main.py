#!/usr/bin/python3

lookup = __import__("0-lookup").lookup

class MyClass1(object):
    pass

class MyClass2(object):
    myatrr = 3
    def my_method():
        pass

print(lookup(MyClass1))
print(lookup(MyClass2))
print(lookup(int))
