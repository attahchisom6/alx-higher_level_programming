#!/usr/bin/python3

def max_integer(my_list=[]):

    len_list = len(my_list)
    if len_list == 0:
        return (None)
    else:
        max_num = my_list[0]
        for k in range(len_list):
            if my_list[k] > max_num:
                max_num = my_list[k]
        return (max_num)
    return (none)
