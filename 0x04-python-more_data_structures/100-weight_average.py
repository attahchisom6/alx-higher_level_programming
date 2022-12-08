#!/usr/bin/python3

def weight_average(my_list=[]):

    if len(my_list) == 0:
        return (0)

    mul = 0
    sum = 0

    for tup in my_list:
        mul = mul + tup[0] * tup[1]
        sum = sum + tup[1]
        w_avrg = mul / sum
    return (w_avrg)
