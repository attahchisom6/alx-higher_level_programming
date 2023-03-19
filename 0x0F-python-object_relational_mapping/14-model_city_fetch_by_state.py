#!/usr/bin/python3

"""
Script to list all elements in the city database
"""
from sys import argv
from model_state import State, Base
from model_city import City
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine("mysql+mysqldb://{}:{}@localhost:3306/{}".
                           format(*argv[1:4]))
    Base.metadata.create_all(engine)
    session = sessionmaker(bind=engine)
    session = session()

    state_city = session.query(State, City).filter(State.id == City.state_id)
    for state, city in state_city:
        print("{}: ({}) {}".format(state.name, city.id, city.name))

    session.close()
