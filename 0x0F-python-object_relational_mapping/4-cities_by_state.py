#!/usr/bin/python3

"""
a script to create a database hbtn_0e_4_usa that accepts 3 arguments
"""
from MySQLdb import connect
from sys import argv

if __name__ == "__main__":
    db = connect(host="localhost", user=argv[1], passwd=argv[2], db=argv[3],
                 port=3306)

    cur = db.cursor()
    cur.execute("SELECT cities.id, cities.name, states.name \
            FROM cities INNER  JOIN states ON cities.state_id=states.id")
    rows = cur.fetchall()
    for row in rows:
        print(row)

    cur.close()
    db.close()
