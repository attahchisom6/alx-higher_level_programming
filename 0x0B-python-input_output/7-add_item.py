#!/usr/bin/python3

"""a function that add all the command line argument to a python list
"""
from sys import argv
import os.path
save_to_json_file = __import__("5-save_to_json_file").save_to_json_file
load_from_json_file = __import__("6-load_from_json_file").load_from_json_file

my_list = []

if os.path.exists("add_item.json"):
    my_list = load_from_json_file("add_item.json")

for k in range(1, len(argv)):
    my_list.append(argv[k])

save_to_json_file(my_list, "add_item.json")
