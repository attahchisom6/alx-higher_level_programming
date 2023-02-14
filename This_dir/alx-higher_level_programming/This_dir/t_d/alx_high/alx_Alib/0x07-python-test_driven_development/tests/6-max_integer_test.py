#!/usr/bin/python3
""" Unittest for max_integer([..])
"""


import unittest
max_integer = __import__('6-max_integer').max_integer


class TestMaxInteger(unittest.TestCase):
    """ Test for max integer. """
    def test_max_integer(self):
        """
        Function to find and return the max integer in a list of
        integers. If the list is empty, the function returns None
        """
        max1 = max_integer([])
        max2 = max_integer([1, 2, 3, 4])
        max3 = max_integer([1, 3, 4, 2])
        max4 = max_integer([-1, 2, 3, -4])
        max5 = max_integer([2, 3, -2])
        max6 = max_integer([1, 2, 3, 4, 5, 9, 7, 2])
        max7 = max_integer([1, 2, 3.5, 3])

        self.assertEqual(max1, None)
        self.assertEqual(max2, 4)
        self.assertEqual(max3, 4)
        self.assertEqual(max4, 3)
        self.assertEqual(max5, 3)
        self.assertEqual(max6, 9)
        self.assertEqual(max7, 3.5)


if __name__ == '__main__':
    unittest.main()
