#!/usr/bin/python3

"""function that append text to an aleay existing file
if it doesnt exist create another one
"""


def append_write(filename="", text=""):
    """appending funxtion"""
    with open(filename, "a", encoding="utf-8") as f:
        f = f.write(text)
    return (f)
