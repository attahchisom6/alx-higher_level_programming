#!/usr/bin/python3
def max_integer(my_list=[]):
    # if list is empty
    if not my_list:
        return
    else:
        # loop through list until second to last element
        for i in range(0, len(my_list) - 1):
            # shift element to the right if it is a bigger integer
            if my_list[i] > my_list[i + 1]:
                temp = my_list[i]
                my_list[i] = my_list[i + 1]
                my_list[i + 1] = temp
            else:  # else, continue with loop
                continue
        # return the last item
        return my_list[len(my_list) - 1]
