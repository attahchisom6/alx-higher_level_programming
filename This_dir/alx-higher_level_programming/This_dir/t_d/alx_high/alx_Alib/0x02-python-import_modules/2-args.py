#!/usr/bin/python3
# script should not run if imported
if __name__ == "__main__":
    from sys import argv

    # if there are no arguments
    if len(argv) == 1:
        print("{:d} arguments.".format(len(argv) - 1))

    # if only one arg is passed
    elif len(argv) == 2:
        print("{:d} argument:".format(len(argv) - 1))
        print("{:d}: {:s}".format(len(argv) - 1, argv[1]))

    # if multiple args are passed
    else:
        print("{:d} arguments:".format(len(argv) - 1))
        count = 1
        for i in range(1, len(argv)):
            print("{:d}: {:s}".format(count, argv[i]))
            count += 1
