#!/usr/bin/python3
""" This module prints a text. """


def text_indentation(text):
    """
    Prints a text with 2 new lines after
    each of these characters: .? and :
    """
    if type(text) != str:  # text must be a string
        raise TypeError('text must be a string')

    # Replace with 2 new lines
    text = text.replace(". ", ".\n\n")
    text = text.replace("? ", "?\n\n")
    text = text.replace(": ", ":\n\n")
    print("{}".format(text))
