#!/usr/bin/python3
for i in range(0, 100):
    if i != 99:  # check if last number is met
        print("{0:02d}".format(i), end=', ')
    else:  # last number
        print("{0:d}".format(i))
