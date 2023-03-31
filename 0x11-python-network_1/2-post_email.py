#!/usr/bin/python3
"""
Python script that takes in a URL and an email, sends a POST request
to the passed URL with the email as a parameter, and displays the
body of the response (decoded in utf-8)
"""
from urllib import parse
from urllib.request import urlopen, Request
from sys import argv


def display_url_body(argv):
    """displays the the body of a response due to a key parameter 'email'
    """
    value = {"email": argv[2]}
    data = parse.urlencode(value)
    data = data.encode('utf8')
    url = argv[1]
    url_data = Request(url, data)

    with urlopen(url_data) as response:
        response_body = response.read()
        print(response_body.decode("utf8"))


if __name__ == "__main__":
    display_url_body(argv)
