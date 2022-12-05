#!/usr/bin/python3

def multiple_returns(sentence):
    x = len(sentence)
    if x == 0:
        tup = (0, None)
    else:
        y = sentence[0]
        tup = (x, y)
    return (tup)
