#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    """
    divides element by element 2 lists
    my_list_1: first list
    my_list_2: second list
    list_length: can be bigger than the length of both lists
    Return: a new list (length = list_length) with all divisions
    """
    result = []  # create list
    for i in range(list_length):  # loop through list
        try:
            div = my_list_1[i] / my_list_2[i]  # get quotient
        except (TypeError, ValueError):  # not an integer
            div = 0
            print("wrong type")
        except ZeroDivisionError:  # divisor is zero
            div = 0
            print("division by 0")
        except IndexError:  # index is out of range
            div = 0
            print("out of range")
        finally:
            result.append(div)  # append quotient to list
    return result
