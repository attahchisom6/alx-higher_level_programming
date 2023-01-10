#!/usr/bin/python3

"""my_int subclass"""


class MyInt(int):
    """A sub class to demonstrate the subtle effects of ints methods"""

    def __eq__(self, the_other):
        """becomes a method to cause a contradiction
        """
        return int.__ne__(self, the_other)

    def __ne__(self, the_other):
        """Another method to cause a comparison contradiction
        """

        return int.__eq__(self, the_other)
