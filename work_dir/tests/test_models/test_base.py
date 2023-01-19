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
        b1 = Base()
        self.assertEqual(b1.__dict__, {'id': 1})
        b2 = Base()
        self.assertEqual(b2.__dict__, {'id': 2})
        b3 = Base(50)
        self.assertEqual(b3.__dict__, {'id': 50})
        b4 = Base()
        self.assertEqual(b4.__dict__, {'id': 3})

    def test_raise_error(self):
        """check for raised errors"""
        b = Base()
        with self.assertRaises(AttributeError):
            b = Base()
            print(b.x)
        with self.assertRaises(NameError):
            b = Base_geometry
        with self.assertRaises(AttributeError):
            b.to_dictionary()

    def test_json_string(self):
        """tests json strings and methods"""
        r1 = Rectangle(10, 7, 2, 5)
        dictionary = r1.to_dictionary()
        json_dictionary = Base.to_json_string(sorted(dictionary.items()))
        self.assertEqual(json_dictionary, '[["height", 7], ["id", 1], ["width", 10], '
                '["x", 2], ["y", 5]]')
        self.assertFalse(type(dictionary) == type(json_dictionary))

        r2 = Rectangle(10, 7, 3, 5, 8)
        dictionary = r2.to_dictionary()
        json_dictionary = Base.to_json_string(sorted(dictionary.items()))
        self.assertEqual(json_dictionary, '[["height", 7], ["id", 8], ["width", 10], '
                '["x", 3], ["y", 5]]')
        self.assertFalse(type(json_dictionary) == type(dictionary))

        r3 = Rectangle(4, 5)
        dictt = r3.to_dictionary()
        json_dictt = Base.to_json_string(sorted(dictt.items()))
        self.assertEqual(json_dictt, '[["height", 5], ["id", 2], ["width", 4], '
                '["x", 0], ["y", 0]]')
        self.assertFalse(type(json_dictt) == type(dictt))

        dictt = []
        json_dictt = Base.to_json_string(dictt)
        self.assertEqual(json_dictt, '[]')
        self.assertFalse(type(json_dictt) == type(dictt))

        dictt = None
        json_dictt = Base.to_json_string(dictt)
        self.assertEqual(json_dictt, '[]')
        self.assertFalse(type(dictt) == type(json_dictt))

    def test_rectangular_objs(self):
        """test the save_to_file method"""
        r1 = Rectangle(10, 7, 2, 8)
        r2 = Rectangle(2, 4)
        Rectangle.save_to_file([r1, r2])
        with open("Rectangle.json", "r") as f:
            sum_read = sum(list(map(lambda x: ord(x), f.read())))
            sum_expected = sum(list(map(lambda x: ord(x), '[{"y": 8, "x": 2, '
                                        '"id": 1, "width": 10, "height": 7}, '
                                        '{"y": 0, "x": 0, "id": 2, '
                                        '"width": 2, "height": 4}]')))
            self.assertEqual(sum_read, sum_expected)

        r1 = Rectangle(10, 7)
        r2 = Rectangle(2, 4)
        Rectangle.save_to_file([r1, r2])
        with open("Rectangle.json", "r") as f:
            sum_read = sum(list(map(lambda x: ord(x), f.read())))
            sum_expected = sum(list(map(lambda x: ord(x), '[{"y": 0, "x": 0, '
                                        '"id": 3, "width": 10, "height": 7}, '
                                        '{"y": 0, "x": 0, "id": 4, '
                                        '"width": 2, "height": 4}]')))
            self.assertEqual(sum_read, sum_expected)


    def test_empty_save_to_file(self):
        """saving empty list to a file"""
        Rectangle.save_to_file([])
        with open("Rectangle.json", "r") as f:
            empty = f.read()
            self.assertEqual(empty, "[]")

        Square.save_to_file([])
        with open("Square.json", "r") as f:
            empty = f.read()
            self.assertEqual(empty, "[]")

    def test_Square_objs(self):
        """test square instances"""
        s1 = Square(3, 5, 7, 8)
        s2 = Square(4, 3)
        Square.save_to_file([s1, s2])

        with open("Square.json") as f:
            sum_read = sum(list(map(lambda x: ord(x), f.read())))
            sum_expected = sum(list(map(lambda x: ord(x), '[{"size": 3, "x": 5, '
                                        '"y": 7, "id": 8}, '
                                        '{"size": 4, "x": 3, "y": 0, "id": 1}]')))
            self.assertEqual(sum_read, sum_expected)

        s1 = Square(9, 7, 3)
        s2 = Square(11, 2)
        Square.save_to_file([s1, s2])

        with open("Square.json") as f:
            sum_read = sum(list(map(lambda x: ord(x), f.read())))
            sum_expected = sum(list(map(lambda x: ord(x), '[{"size": 9, "x": 7, '
                                        '"y": 3, "id": 2}, '
                                        '{"size": 11, "x": 2, "y": 0, "id": 3}]')))
            self.assertEqual(sum_read, sum_expected)

    def test_to_jstring_and_from_json_string(self):
        """Tests the two methods, to_json_string and from_json_string"""

        input_L = [
                {"id": 45, "x": 2, "y": 4, "height": 15, "width": 17},
                {"id": 54, "x": 3, "y": 5, "height": 51, "width": 71}
                ]
        json_input_L = Rectangle.to_json_string(input_L)
        json_output_L = Rectangle.from_json_string(json_input_L)
        self.assertEqual(json_output_L, [{"id": 45, "x": 2, "y": 4, "height": 15, "width": 17},
                                         {"id": 54, "x": 3, "y": 5, "height": 51, "width": 71}])

        input_L = [
                {"size": 9, "y": 5, "x": 12, "id": 89},
                {"size": 12, "3x": 4, "y": 

    def test_create(self):
        r1 = Rectangle(10, 7, 2, 8)
        dictt = r1.to_dictionary()
        r2 = Rectangle.create(**dictt)
        self.assertEqual(str(r2), '[Rectangle] (1) 2/8 - 10/7')

    def tearDown(self):
        """reset each method, every time it runs, and remove
        every file created in the process"""
        Base._Base__nb_objects = 0

        """removing json files"""
        try:
            os.remove("Rectangle.json")
        except FileNotFoundError:
            pass
        try:
            os.remove("Square.json")
        except Exception:
            pass

        """removing csv files"""
        try:
            os.remove("Rectangle.csv")
        except Exception:
            pass
        try:
            os.remove("Square.csv")
        except Exception:
            pass
