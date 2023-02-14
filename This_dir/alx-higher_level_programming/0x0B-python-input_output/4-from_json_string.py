#!/usr/bin/python3

"""fuction to return a python object from a json string
"""
import json


def from_json_string(my_str):
    """converts json string to python object
    Args:
        my_str: json string
    """
    pyobj = json.loads(my_str)
    return (pyobj)
