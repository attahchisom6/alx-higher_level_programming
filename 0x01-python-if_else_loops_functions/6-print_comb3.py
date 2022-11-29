#!/usr/bin/python3
for p in range(0, 9):
    for k in range(1, 10):
        if k > p:
            if k != 9 or p != 8:
                print("{:d}{:d}".format(p, k), end=", ")
        if k == 9 and p == 8:
            print("{:d}{:d}".format(p, k))
