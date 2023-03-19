#!/usr/bin/python3

"""
 change the name of a state where id is 2 in a database
 """
 from sys import argv
 from model_state import State, Base
 from sqlalchemy import create_engine
 from sqlalchemy.orm import sessionmaker

 if __name__ == "__main__":
     engine = create_engine("mysql+mysqldb://{}:{}@localhost:3306/{}".
                            format(*argv[1:4]))
     Base.metadata.create_all(engine))
     session = sessionmaker(bind=engine)
     session = session()

     inserted_state = session.query(State).filter_by(id=2).first()
     inserted_state.name = 'New Mexico'
     session.commit()

     session.close()
