#!/usr/bin/python3
def safe_print_integer(value):
    """
    prints an integer
    value: can be any type (integer, string, etc.)
    Return: True if value has been correctly printed, False otherwise
    """
    try:
        print("{:d}".format(value))  # print integer
        return True
    except (TypeError, ValueError):  # value is not an integer
        return False
