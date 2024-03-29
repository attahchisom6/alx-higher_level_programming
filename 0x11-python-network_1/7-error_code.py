#!/usr/bin/python3
"""
Python script that takes in a URL, sends a request to the URL and displays
the body of the response.
"""


if __name__ == "__main__":
    from sys import argv
    from requests import get

    response = get(argv[1])
    if response.status_code >= 400:
        print("Error code: {}".format(response.status_code))
    else:
        print(response.text)
