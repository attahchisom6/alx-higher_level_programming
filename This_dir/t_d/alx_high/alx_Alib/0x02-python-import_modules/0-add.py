#!/usr/bin/python3
# script should not run if imported
if __name__ == "__main__":
    import add_0 as addition

    a = 1
    b = 2
    res = addition.add(a, b)
    print("{:d} + {:d} = {:d}".format(a, b, res))
