#!/usr/bin/python3

def divisible_by_2(my_list=[]):

    new_list = [True if k % 2 == 0 else False for k in range(len(my_list))]
    return (new_list)
