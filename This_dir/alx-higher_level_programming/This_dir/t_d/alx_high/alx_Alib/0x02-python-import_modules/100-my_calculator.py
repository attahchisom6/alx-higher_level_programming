#!/usr/bin/python3
# script should not run if imported
if __name__ == "__main__":
    from sys import argv as a
    from sys import exit
    import calculator_1 as calc

    # if arguments are not exactly 4
    if len(a) != 4:
        print(f"Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)

    # cast inputs as integers
    a[1] = int(a[1])
    a[3] = int(a[3])
    # if operator is addition
    if a[2] == "+":
        result = calc.add(a[1], a[3])
        print("{} {} {} = {}".format(a[1], a[2], a[3], result))

    # if operator is subtraction
    elif a[2] == "-":
        result = calc.sub(a[1], a[3])
        print("{} {} {} = {}".format(a[1], a[2], a[3], result))

    # if operator is multiplication
    elif a[2] == "*":
        result = calc.mul(a[1], a[3])
        print("{} {} {} = {}".format(a[1], a[2], a[3], result))

    # if operator is division
    elif a[2] == "/":
        result = calc.div(a[1], a[3])
        print("{} {} {} = {}".format(a[1], a[2], a[3], result))

    # if operator is not one of the above
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
