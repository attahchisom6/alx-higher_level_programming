#!/usr/bin/python3
def safe_print_division(a, b):
    """
    divides 2 integers and prints the result
    a: first integer
    b: second integer
    Return: the value of the division, otherwise: None
    """
    try:
        result = a / b  # divide integers
    except ZeroDivisionError:  # divisor is zero
        result = None
    finally:
        print("Inside result: {}".format(result))
    return result
