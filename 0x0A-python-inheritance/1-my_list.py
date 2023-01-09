#!/usr/bin/python3

"""A subclass of list"""


class MyList(list):
    """mylist, a subclass of list"""
    def print_sorted(self):
        print(sorted(self))
