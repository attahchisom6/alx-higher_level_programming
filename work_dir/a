#!/usr/bin/python3

import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square
import os


class Test_Base(unittest.TestCase):
    """ class to test all objects attribute and methods in base.py"""

    def test_obj(self):
        """
        test the type and id's in of each object
        """
        b1 = Base()
        self.assertIsInstance(b1, Base)
        self.assertFalse(type(b1) == type(Base))
        self.assertFalse(id(b1) == id(Base))

        b2 = Base()
        # self.assertIsInstance(b2, Base)
        self.assertTrue(type(b2) == type(b1))
        self.assertFalse(id(b2) == id(b1))

    def test_id_none(self):
        """checks when id is none"""
        b = Base()
        self.assertEqual(b.id, 1)

        b = Base()
        self.assertEqual(b.id, 2)

        b = Base()
        self.assertEqual(b.id, 3)

        c = Base()
        self.assertEqual(c.id, 4)

    def test_id_integer(self):
        """checks if id is an integer"""
        b1 = Base(20)
        self.assertEqual(b1.id, 20)
        b1 = Base(5)
        self.assertEqual(b1.id, 5)
        b2 = Base(75)
        self.assertEqual(b2.id, 75)
        b2 = Base(-5)
        self.assertEqual(b2.id, -5)
        b1 = Base(0)
        self.assertEqual(b1.id, 0)
        b1 = Base(100e+1000)
        self.assertEqual(b1.id, 100e+1000)
        b1.__init__(30)
        self.assertEqual(b1.id, 30)

    def test_obj_atrribute(self):
        """test the dictionary attribute of an object"""
        b1 = Base(1)
        self.assertEqual(b1.__dict__, {'id': 1})
        b1 = Base()
        self.assertEqual(b1.__dict__, {'id': 2})
        b2 = Base(50)
        self.assertEqual(b2.__dict__, {'id', 50})
        b1 = Base()
        b1.assertEqual(b1.__dict__, {'id', 3})



if __name__ == "__main__":
    unittest.main()
