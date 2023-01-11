#!/usr/bin/python3

"""A function that searches for a specific string and append a desired string
at the end of the line containing the string
"""


def append_after(filename="", search_string="", new_string=""):
    lines = ""
    with open(filename, "r", encoding="utf-8") as f:
        for ln in f:
            lines += ln
            if search_string in lines:
                lines += new_string
    with open(filename, "w", encoding="utf-8") as f:
        f.write(lines)
