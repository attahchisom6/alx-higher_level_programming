#!/usr/bin/python3

from random import randint
from ctypes import CDLL

opc = CDLL('./100-operations.so')

a = randint(-111, 111)
b = randint(-111, 111)

print("{} + {} = {}".format(a, b, opc.add(a, b)))
print("{} - {} = {}".format(a, b, opc.sub(a, b)))
print("{} x {} = {}".format(a, b, opc.mul(a, b)))
print("{} / {} = {}".format(a, b, opc.div(a, b)))
print("{} mod {} = {}".format(a, b, opc.mod(a, b)))
