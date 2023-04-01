#!/usr/bin/python3
"""
Write a Python script that takes in a letter and sends a POST request to
http://0.0.0.0:5000/search_user with
the letter as a parameter.
"""

if __name__ == "__main__":
    """
    send avketter to a specified url
    """

if __name__ == "__main__":
    from requests import post
    from sys import argv

    if len(argv) > 1:
        q = argv[1]
    else:
        q = ""
    try:
        response = post("http://0.0.0.0:5000/search_user", data={"q": q})
        j_response = response.json()
        if j_response == {}:
            print("No result")
        else:
            print("[{}] {}".format(j_response.id, j_response.name))
    except ValueError:
        print("Not a valid JSON")
