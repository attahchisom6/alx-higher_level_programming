#!/usr/bin/python3

"""
 delete all the element in the database containing a
 """
from sys import argv
from model_state import State, Base
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine("mysql+mysqldb://{}:{}@localhost:3306/{}".
                           format(*argv[1:4]))
    Base.metadata.create_all(engine)
    session = sessionmaker(bind=engine)
    session = session()

    delected_states = session.query(State).filter(State.name.contains('a'))
    for state in delected_states:
        session.delete(state)
    session.commit()

    session.close()
