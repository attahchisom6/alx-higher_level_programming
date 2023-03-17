#!/usr/bin/python3

"""
This script is to protect the data base from mysql injections
"""
from MySQLdb import connect
from sys import argv

if __name__ == "__main__":
    db = connect(host="localhost", user=argv[1], passwd=argv[2], db=argv[3],
                 port=3306)
    cur = db.cursor()
    cur.execute("SELECT * FROM states WHERE name LIKE %s ORDER \
            BY states.id ASC", (argv[4], ))
    rows = cur.fetchall()
    for row in rows:
        print(row)

    cur.close()
    db.close()
