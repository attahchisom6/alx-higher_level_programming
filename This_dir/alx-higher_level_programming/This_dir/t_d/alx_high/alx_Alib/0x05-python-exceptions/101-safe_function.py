#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    """
    executes a function safely
    fct: will be always a pointer to a function
    args: arguments
    Return: the result of the function
    """
    try:
        return fct(*args)  # execute function
    except Exception as e:
        print("Exception: {}".format(e), file=sys.stderr)
        return None
