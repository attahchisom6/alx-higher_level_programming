#!/usr/bin/python3

"""This will select a table states from a database hbtn_0e_0_usa
"""
import MySQLdb
from sys import argv

if __name__ == "__main__":
    db = MySQLdb.connect(
            host="localhost", user=argv[1], passwd=argv[2],
            db=argv[3], port=3306)
    cur = db.cusor()
    cur.execute("SELECT * FROM states")
    rows = cur.fetchall()
    for row in rows:
        print(row)

    cur.close()
    db.close()
