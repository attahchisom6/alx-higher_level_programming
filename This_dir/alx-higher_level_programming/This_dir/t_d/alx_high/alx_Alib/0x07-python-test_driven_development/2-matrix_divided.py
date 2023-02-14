#!/usr/bin/python3
""" This module divides all elements of a matrix. """


def matrix_divided(matrix, div):
    """ Returns a new matrix. """
    for row in matrix:
        for item in row:
            if type(item) != int and type(item) != float:
                raise TypeError('matrix must be a matrix (list of lists) of integers/floats')

    length = []
    for row in matrix:
        length.append(len(row))
    first = length[0]
    for item in length:
        if item != first:
            raise TypeError('Each row of the matrix must have the same size')

    if type(div) != int and type(div) != float:
        raise TypeError('div must be a number')
    if div == 0:
        raise ZeroDivisionError('division by zero')

    new = []
    for row in range(len(matrix)):
        new.append([])
        for item in range(len(matrix[row])):
            result = matrix[row][item] / div
            new[row].append(round(result, 2))
    return new
