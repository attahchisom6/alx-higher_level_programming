#!/usr/bin/python3
def uppercase(str):
    for k in range(len(str)):
        if ord(str[k]) >= 97 and ord(str[k]) < 123:
            m = 32
        else:
            m = 0
        print("{:c}".format(ord(str[k]) - m), end="")
    print()
