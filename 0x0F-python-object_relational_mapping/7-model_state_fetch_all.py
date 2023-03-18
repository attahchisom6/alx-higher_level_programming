#!/usr/bin/python3

"""
script that list all objects of the database hbtn_0e_6_usa via sqlalchemy
"""
from sys import argv
from model_state import Base, State
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine("mysql+mysqldb://{}:{}@localhost:3306/{}".
                           format(argv[1], argv[2], argv[3]))

    Base.metadata.create_all(engine)
    session = sessionmaker(bind=engine)
    session = session()

    states_items = session.query(State).order_by(State.id)
    for state in states_items:
        state = "{}: {}".format(state.id, state.name)
        print(state)
