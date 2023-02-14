#!/usr/bin/python3

"""
function to read a content of a file
"""


def read_file(filename=""):
    """a function to read file

    Args:
        @filename: name of the file
    """

    with open(filename, "r", encoding="utf-8") as f:
        k_lines = f.read()
        print(k_lines, end="")
