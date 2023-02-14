#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:  # check if number is negative
    n = number * (-1)  # get absolute
    d = (n % 10) * -1  # get last digit and add negative sign
else:  # number is positive
    n = number  # n takes number
    d = n % 10  # get last digit
if d > 5:  # if last digit is greater than 5
    print(f"Last digit of {number:d} is {d:d} and is greater than 5")
elif d == 0:  # if last digit is 0
    print(f"Last digit of {number:d} is {d:d} and is 0")
else:  # last digit is less than 6 and not 0
    print(f"Last digit of {number:d} is {d:d} and is less than 6 and not 0")
