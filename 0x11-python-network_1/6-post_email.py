#!/usr/bin/python3
"""
Python script that takes in a URL and an email address, sends a POST request
to the passed URL with the email as a parameter, and finally displays the
body of the response.
"""
from sys import argv
from requests import post


if __name__ == "__main__":
    """send a post request to a url"""
    value = {"email": argv[2]}

    response = post(argv[1], value)
    txt = response.text
    print (txt)
