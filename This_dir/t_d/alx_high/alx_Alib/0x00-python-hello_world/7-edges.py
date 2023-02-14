#!/usr/bin/python3
word = "Holberton"
word_first_3 = word[0:3]  # get the first 3 characters
word_last_2 = word[-2:len(word)]  # get the last 2 characters
middle_word = word[1:-1]  # ignore the first and last characters
print(f"First 3 letters: {word_first_3}")
print(f"Last 2 letters: {word_last_2}")
print(f"Middle word: {middle_word}")
