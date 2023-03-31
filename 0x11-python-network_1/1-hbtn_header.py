#!/usr/bin/python3

"""
Python script that takes in a URL, sends a request to the URL and
displays the value of the X-Request-Id variable found in the header
of the response.
"""
from urllib.request import urlopen
from sys import argv


def get_url_value(argv):
    """
    print the value of X-Request-Id containedbon the header of the response
    """

    url = argv
    with urlopen(url) as response:
        header = response.info()
        print(header['X-Request-Id'])


if __name__ == "__main__":
    get_url_value(argv[1])
