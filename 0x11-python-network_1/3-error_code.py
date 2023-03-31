#!/usr/bin/python3
"""
Python script that takes in a URL, sends a request to the URL and displays
the body of the response (decoded in utf-8).
"""
from urllib import error
from urllib.request import urlopen
from sys import argv


def send_url_display_response(argv):
    url = argv[1]
    try:
        with urlopen(url) as response:
            html_body = response.read()
            print(html_body.decode('utf8'))
    except error.HTTPError as e:
        print("Error code: {}".format(e.code))


if __name__ == "__main__":
    send_url_display_response(argv)
