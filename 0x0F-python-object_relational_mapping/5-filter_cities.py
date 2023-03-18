#!/usr/bin/python3

"""
This Script will take a state name as an argument and return
all city names availaible to the state
"""
from MySQLdb import connect
from sys import argv

if __name__ == "__main__":
    db = connect(host="localhost", user=argv[1], passwd=argv[2], db=argv[3],
                 port=3306)
    cur = db.cursor()
    cur.execute("SELECT c.name FROM cities as c INNER JOIN states as s \
            ON c.state_id=s.id WHERE s.name LIKE %s", (argv[4], ))

    rows = cur.fetchall()
    store = list(row[0] for row in rows)
    print(*store, end=", ")

    cur.close()
    db.close()
