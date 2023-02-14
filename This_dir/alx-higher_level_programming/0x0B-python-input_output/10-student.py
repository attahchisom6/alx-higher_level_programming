#!/usr/bin/python3

"""
definining a student class that details his name age last name
a dictionary representation of the student informatio  in json
"""


class Student:
    """A studebt class"""
    first_name = ""
    last_name = ""
    age = 0

    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    """public instance to retrieve dictionary representation of student
    instance
    """
    def to_json(self, attrs=None):
        if type(attrs) is list and all(type(elem) == str for elem in attrs):
            return {k: getattr(self, k) for k in attrs if hasattr(self, k)}
        return (self.__dict__)
