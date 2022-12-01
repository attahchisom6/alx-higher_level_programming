#!/usr/bin/python3

for c in range(ord('z'), ord('a') - 1, -1):
    if c % 2:
        m = 32
    else:
        m = 0
    print("{}".format(chr(c - m)), end="")
