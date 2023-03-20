#!/usr/bin/python3
"""
script to list all element cotauned in the database
hbtn_0e_101_usa
"""
from sys import argv
from relationship_state import State, Base
from relationship_city import City
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine(
            "mysql+mysqldb://{}:{}@localhost:3306/{}"
            .format(*argv[1:4]))
    Base.metadata.create_all(engine)
    session = sessionmaker(bind=engine)
    session = session()

    state_city = session.query(
            State).outerjoin(City).order_by(State.id, City.id)
    for state in state_city:
        print("{}: {}".format(state.id, state.name))
        for city in state.cities:
            print("    {}: {}".format(city.id, city.name))

    session.close()
