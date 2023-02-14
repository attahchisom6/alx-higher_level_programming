#!/usr/bin/python3

"""function to save python objects as json string into a json file
"""
import json


def save_to_json_file(obj, filename):
    """creating file to save the string
    """
    with open(filename, "w", encoding="utf-8") as f:
        json.dump(obj, f)
