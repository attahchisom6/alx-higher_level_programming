#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    new_tuple = ()
    len_a = len(tuple_a)
    len_b = len(tuple_b)

    if len_a == 0:
        x1 = 0
        x2 = 0
    elif len_a == 1:
        x1 = tuple_a[0]
        x2 = 0
    else:
        x1 = tuple_a[0]
        x2 = tuple_a[1]

    if len_b == 0:
        y1 = 0
        y2 = 0
    elif len_b == 1:
        y1 = tuple_b[0]
        y2 = 0
    else:
        y1 = tuple_b[0]
        y2 = tuple_b[1]

    new_tuple = (x1 + y1, x2 + y2)
    return (new_tuple)
