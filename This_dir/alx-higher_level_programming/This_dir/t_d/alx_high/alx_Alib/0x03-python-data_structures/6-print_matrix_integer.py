#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    # loop through row and column
    for row in range(len(matrix)):
        for col in range(len(matrix[row])):
            # do not print space for the first element
            if col != 0:
                print(" ", end="")
            print("{:d}".format(matrix[row][col]), end="")
        print()  # print newline and call the next row
