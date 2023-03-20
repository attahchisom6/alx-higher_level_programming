#!/usr/bin/python3

"""
module to create a child class
The subclass City relates to the city table and is a child of the state class
"""
from relationship_state import Base
from sqlalchemy import Integer, String, Column, ForeignKey


class City(Base):
    """ingerits from State class

    Args:
        @id: int
        @name: str
        @state_id: int
    """
    __tablename__ = "cities"
    id = Column(Integer, unique=True, nullable=False, primary_key=True)
    name = Column(String(128), nullable=False)
    state_id = Column(Integer, ForeignKey("states.id"), nullable=False)
