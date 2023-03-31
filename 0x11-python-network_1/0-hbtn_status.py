#!/usr/bin/python3
""""
Python script that takes in a URL, sends a request to the URL
and displays the value of the X-Request-Id variable found in
the header of the response.

This script potends to fetch the website https://hbtn.intranet.io/status
"""
from urllib.request import urlopen


def fetch_url(url):
    with urlopen(url) as response:
        html_codes = response.read()
        print("Body response:")
        print("-\ttype: {}".format(type(html_codes)))
        print("-\tcontent: {}".format(html_codes))
        print("-\tutf8 content: {}".format(html_codes.decode('utf8')))


if __name__ == "__main__":
    fetch_url("https://alx-intranet.hbtn.io/status")
