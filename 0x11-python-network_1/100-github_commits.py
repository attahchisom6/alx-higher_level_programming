#!/usr/bin/python3
"""
list the 10 most recent commits of a github user, using github api
"""


if __name__ == "__main__":
    from sys import argv
    from requests import get

    url = "https://api.github.com/repos/{}/{}/commits".format(argv[2], argv[1])
    response = get(url)

    j_response = response.json()
    try:
        for k in range(10):
        commit = "{}: {}".format(j_response[k].get(
            "sha"), j_response[k].get("commit").get("author").get("name"))
        print(commit)
    except IndexError:
        pass
