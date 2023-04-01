#!/usr/bin/python3
"""
Write a Python script that takes your GitHub credentials (username and
password) and uses the GitHub API to
display your id
"""

if __name__ == "__main__":
    from sys import argv
    from requests import get

    userName = argv[1]
    passwd = argv[2]

    response = get("https://api.github.com/user", auth=(userName, passwd))
    j_response = response.json()
    print("{}".format(j_response.get("id")))
