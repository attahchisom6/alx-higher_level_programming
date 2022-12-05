#!/usr/bin/python3

def divisible_by_2(my_list=[]):

    new_list = []

    p = len(my_list)

    new_list = [True if my_list[k] % 2 == 0 else False for k in range(p)]
    return (new_list)
