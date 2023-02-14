#!/usr/bin/python3
def roman_to_int(roman_string):
    """
    converts a Roman numeral to an integer
    roman_string: string to be converted
    Return: returns an integer
    """
    result = 0
    # check if input is a string
    if type(roman_string) != str or roman_string is None:
        return 0
    # input is a string
    else:
        # use dict to define key numerals
        rom = {
            'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100,
            'D': 500, 'M': 1000
        }
        # get string length
        length = len(roman_string)
        # process the last string character and add int to result
        result += rom[roman_string[length - 1]]
        # iterate through string in reverse
        for i in range(length - 2, -1, -1):
            # if the left str char is greater than the right str char
            if rom[roman_string[i]] >= rom[roman_string[i + 1]]:
                # add the int of left str char to result
                result += rom[roman_string[i]]
            else:  # left str char is lesser than right str char
                # subtract the int of left str char from result
                result -= rom[roman_string[i]]
        return result
