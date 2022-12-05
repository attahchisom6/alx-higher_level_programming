#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    if not my_list:
        pass
    else:
        p = len(my_list) - 1
        while p > 0:
            k = 0
            while k < p:
                temp = my_list[k]
                my_list[k] = my_list[k + 1]
                my_list[k + 1] = temp
                k = k + 1
            p = p - 1
        for k in my_list:
            print("{:d}".format(k))
