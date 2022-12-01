#!/usr/bin/python3

if __name__ == "__main__":
    """Handle basic arithmetic operations."""
    from calculator_1 import add, sub, mul, div
    import sys

    if len(sys.argv) - 1 != 3:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)

    ops = {"+": add, "-": sub, "*": mul, "/": div}
import sys
sys.argv
k = len(sys.argv) - 1
if k == 0:
    print("{} arguments".format(k))
elif k == 1:
    print("{}: argument:".format(k))
    print("{}: {}".format(k, sys.argv[k]))
else:
    print("{} arguments".format(k))
    for p in range(k):
        print("{}: {}".format(p + 1, sys.argv[p + 1]))
    if sys.argv[2] not in list(ops.keys()):
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)

    a = int(sys.argv[1])
    b = int(sys.argv[3])
    print("{} {} {} = {}".format(a, sys.argv[2], b, ops[sys.argv[2]](a, b)))
