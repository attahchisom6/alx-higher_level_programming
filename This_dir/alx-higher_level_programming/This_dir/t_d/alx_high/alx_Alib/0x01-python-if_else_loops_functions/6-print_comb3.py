#!/usr/bin/python3
for i in range(0, 10):
    for j in range(0, 10):
        if i != j and i < j:
            if i != 8 or j != 9:
                print("{0:d}{1:d}".format(i, j), end=', ')
            else:
                print("{0:d}{1:d}".format(i, j))
