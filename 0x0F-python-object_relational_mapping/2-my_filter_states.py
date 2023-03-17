#!/usr/bin/python3

"""
display all states starting with capital letter with the first letter
in the fourth argument
"""
from sys import argv
from MySQLdb import connect

if __name__ == "__main__":
    db = connect(host="localhost", user=argv[1], passwd=argv[2],
                 db=argv[3], port=3306)
    cur = db.cursor()
    cur.execute(
            "SELECT * FROM states WHERE name LIKE BINARY '{}' \
                    ORDER BY states.id ASC".format(argv[4]))
    rows = cur.fetchall()
    for row in rows:
        print(row)
