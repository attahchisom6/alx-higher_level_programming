#!/usr/bin/python3
"""
Python script that fetches https://alx-intranet.hbtn.io/status
"""
import requests


def fetch_url(url):
    """fetches a url and displays it in certain string format
    """
    response = requests.get(url)
    txt = response.text
    print("Body response:")
    print("\t- type: {}".format(type(txt)))
    print("\t- content: {}".format(txt))


if __name__ == "__main__":
    fetch_url("https://alx-intranet.hbtn.io/status")
