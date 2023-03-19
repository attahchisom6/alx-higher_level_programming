#!/usr/bin/python3
"""
This will add a state and a city corresponding to it in the database
hbtn_0e_100_usa
"""
from sys import argv
from relationship_city import City
from relationship_state import Base, State
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

if __name__ == "__main__":
    engine = create_engine(
            "mysql+mysqldb://{}:{}@localhost:3306/{}".
            format(*argv[1:4]))
    Base.metadata.create_all(engine)
    session = sessionmaker(bind=engine)
    session = session()

    newState = State(name='California')
    newCity = City(name='San Francisco')
    newState.cities.append(newCity)

    session.add(newCity)
    session.add(newState)
    session.commit()
    session.close()
