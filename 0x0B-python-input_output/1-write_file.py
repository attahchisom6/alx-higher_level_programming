#!/usr/bin/python3

"""function to write a text into a file,
truncate it if there is content in the file already
create the file if doesn't exist
"""


def write_file(filename="", text=""):
    """our writing funxtion
    'w' creates the file if it doesnt exist and overwrites it if it does
    """
    with open(filename, "w", encoding="utf-8") as f:
        f = f.write(text)
    return (f)
