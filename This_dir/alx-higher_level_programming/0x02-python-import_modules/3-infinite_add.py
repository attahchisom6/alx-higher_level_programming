#!/usr/bin/python3

if __name__ == "__main__":
    """print the sum of the command line arguments"""

    import sys

    sum = 0
    k = len(sys.argv) - 1
    for p in range(k):
        m = p + 1
        sum = sum + int(sys.argv[m])
    print("{}".format(sum))
