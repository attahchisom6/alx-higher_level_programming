#!/usr/bin/python3
# script should not run if imported
if __name__ == "__main__":
    from sys import argv

    # if there are no arguments
    if len(argv) == 1:
        add = 0

    # if multiple args are passed
    else:
        add = 0
        for i in range(1, len(argv)):
            num = int(argv[i])
            add += num
    print("{:d}".format(add))
