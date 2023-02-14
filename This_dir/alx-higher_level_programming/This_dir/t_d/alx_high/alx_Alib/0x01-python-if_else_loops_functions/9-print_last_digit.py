#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:  # if number is negative
        number = number * -1  # get the absolute
    n = number % 10  # get the last digit
    print("{0:d}".format(n), end='')
    return n  # return last digit
