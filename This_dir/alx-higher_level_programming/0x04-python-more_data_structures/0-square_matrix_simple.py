#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    new_matrix = []

    new_matrix = [[k * k for k in sub_matrix] for sub_matrix in matrix]
    return (new_matrix)
