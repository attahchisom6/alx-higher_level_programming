#!/usr/bin/python3
for k in range(97, 123):
    if format(chr(k)) != 'e' and format(chr(k)) != 'q':
        print("{}".format(chr(k)), end="")
