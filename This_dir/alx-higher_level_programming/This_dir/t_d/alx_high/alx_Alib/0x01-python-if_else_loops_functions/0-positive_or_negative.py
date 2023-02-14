#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if number > 0:  # if number is greater than zero
    print("{:d} is positive".format(number))
elif number == 0:  # if number is zero
    print("{:d} is zero".format(number))
else:  # number is less than zero
    print("{:d} is negative".format(number))
