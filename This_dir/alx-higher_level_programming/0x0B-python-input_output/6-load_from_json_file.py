#!/usr/bin/python3

"""a function to read json string from a json file and convert them into python
objects
"""
import json


def load_from_json_file(filename):
    """Reading from the json file"""
    with open(filename, "r") as f:
        obj = json.load(f)
        return (obj)
