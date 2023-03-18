#!/usr/bin/python3

"""
This is the State module

This module handles  Base that inherits from declarative_Base module
"""
from mysqlalchemy import Integer, Column, String
from mysql.ext.declarative import declarative_Base()

Base = declarative_base()


class State(Base):
    """
    This class connects/relates to the states table in our
    hbtn_0e_4_usa database
    Args:
        @id: ud of the element in the state table
        @name: name of eqch state in the table
    """

    __tablename__ = 'states'
    id = column(Interger, unique=True, nullable=False, primary_key=True)
    name = column(String(128), nullable=False)
