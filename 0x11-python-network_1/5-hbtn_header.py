#!/usr/bin/python3
"""
Python script that takes in a URL, sends a request to the URL and displays
the value of the variable X-Request-Id in the response header
"""
from requests import get
from sys import argv


def get_url_value(argv):
    """
    gets the value of the header in the url with key 'X-Request-Id'
    """
    arg = argv[1]
    url = get(arg)
    print(url.headers['X-Request-Id'])


if __name__ == "__main__":
    get_url_value(argv)
