#!/usr/bin/python3

"""defining a rectangular class"""


class Rectangle:
    """initialuzing a rectangle"""

    number_of_instances = 0
    print_symbol = "#"

    def __init__(self, width=0, height=0):
        """initializing a rectanular object

        Args:
            @width:horizontal length
            @height:vertical length
        """

        self.width = width
        self.height = height
        Rectangle.number_of_instances += 1

    """private instances"""
    @property
    def width(self):
        return (self.__width)

    @width.setter
    def width(self, value):
        if type(value) is not int:
            raise ValueError("width must be an integer")
        elif value < 0:
            raise ValueError("width must be an integer")
        else:
            self.__width = value

    @property
    def height(self):
        return (self.__height)

    @height.setter
    def height(self, value):
        if type(value) is not int:
            raise TypeError("height must be an integer")
        elif value < 0:
            raise TypeError("height must be >= 0")
        else:
            self.__height = value

    """public instances"""
    def area(self):
        return (self.__height * self.__width)

    def perimeter(self):
        p = 2 * (self.__width + self.__height)
        if self.__width == 0 or self.__height == 0:
            p = 0
        return (p)

    def __str__(self):
        if self.__width == 0 or self.__height == 0:
            return ""
        else:
            x = self.__width
            y = self.__height
            strr = ""

            for p in range(y):
                for k in range(x):
                    strr = strr + str(self.print_symbol)
                strr = strr + "\n"
            return (strr[:-1])

    def __repr__(self):
        repr = "Rectangle({}, {})".format(self.__width, self.__height)
        return (repr)

    def __del__(self):
        print("Bye rectangle...")
        Rectangle.number_of_instances -= 1

    @staticmethod
    def bigger_or_equal(rect_1, rect_2):
        if type(rect_1) is not Rectangle:
            raise TypeError("rect_1 must be an instance of Rectangle")
        elif type(rect_2) is not Rectangle:
            raise TypeError("rect_2 must be an instance of Rectangle")
        else:
            if rect_1.area() >= rect_2.area():
                return (rect_1)
            else:
                return (rect_2)

    @classmethod
    def square(cls, size=0):
        """A square is essentially a rectangle wih equal side"""
        return (cls(size, size))
