#!/usr/bin/python3

if __name__ == "__main__":
    """print the number and list of argument"""

    import sys

    k = len(sys.argv) - 1

    if k == 0:
        print("{} arguments.".format(k))
    elif k == 1:
        print("{} argument:".format(k))
        print("{}: {}".format(k, sys.argv[k]))
    else:
        print("{} arguments:".format(k))
        for p in range(k):
            m = p + 1
            print("{}: {}".format(m, sys.argv[m]))
