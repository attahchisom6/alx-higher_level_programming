#!/usr/bin/python3

append_write = __import__("2-append_write").append_write

nb_append_chars = append_write("greeting.txt", "hello world\n")
print(nb_append_chars)
