#!/usr/bin/python3

"""
delete all state containing the letter 'a'
"""
from sys import argv
from model_state import Base, State
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine("mysql+mysqldb://{}:{}@localhost:3306/{}".
                           format(*argv[1:4]))
    Base.metadata.create_all(engine)
    session = sessionmaker(bind=engine)
    session = session()

    states = session.query(State).filter(State.name.like('%a%'))
    if states is not None:
        for state in states:
            session.delete(state)
    session.commit()

    session.close()
