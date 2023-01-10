#!/usr/bin/python3

"""
converting a string to json string
"""
import json


def to_json_string(obj):
    """function to cobvert a python instanxe to a json string
    """
    jstr = json.dumps(obj)
    return (jstr)
