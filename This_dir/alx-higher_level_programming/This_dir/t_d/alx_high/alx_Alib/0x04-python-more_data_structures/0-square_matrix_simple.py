#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    """
    computes the square value of all integers of a matrix
    matrix: is a 2 dimensional array
    Return: a new matrix with the values squared
    """
    new = []
    # loop through matrix
    for row in matrix:
        # add the squared value at the end of the list
        new.append([col ** 2 for col in row])
    return new
