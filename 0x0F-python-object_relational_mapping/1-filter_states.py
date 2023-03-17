#!/usr/bin/python3

"""
display all states starting with capital letter N
"""
from sys import argv
from MySQLdb import connect

if __name__ == "__main__":
    db = connect(host="localhost", user=argv[1], passwd=argv[2],
                 db=argv[3], port=3306)
    cuzor = db.cursor()
    cuzor.execute("SELECT * FROM states WHERE namme LIKE BINARY
                  'N%'")
    states = cuzor.fetchall()
    for state in states:
        print(state)

    cuzor.close()
    db.close()
