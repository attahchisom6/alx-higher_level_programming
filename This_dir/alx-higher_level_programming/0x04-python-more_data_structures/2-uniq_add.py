#!/usr/bin/python3

def uniq_add(my_list=[]):
    sum = 0
    new_list = list(set(my_list))
    for k in range(len(new_list)):
        sum = sum + new_list[k]
    return (sum)
