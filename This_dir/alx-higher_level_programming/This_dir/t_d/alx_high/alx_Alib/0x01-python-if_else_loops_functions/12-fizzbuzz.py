#!/usr/bin/python3
def fizzbuzz():
    for i in range(1, 101):
        if i % 15 == 0:  # multiplies of three and five
            print("FizzBuzz ", end='')
        elif i % 3 == 0:  # multiplies of three
            print("Fizz ", end='')
        elif i % 5 == 0:  # multiplies five
            print("Buzz ", end='')
        else:
            print("{0:d} ".format(i), end='')
