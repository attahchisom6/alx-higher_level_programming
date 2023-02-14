#!/usr/bin/python3
# loop through lowercase alphabets
for i in range(122, 96, -1):
    if i % 2 == 0:
        # print lowercase
        print("{}".format(chr(i)), end="")
    else:
        # print uppercase
        print("{}".format(chr(i - 32)), end="")
