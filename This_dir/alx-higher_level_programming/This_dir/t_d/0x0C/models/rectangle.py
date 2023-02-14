#!/usr/bin/python3

"""A subclass Rectangle from the Nase class"""
from models.base import Base


class Rectangle(Base):
    """A derived class from class Base"""
    def __init__(self, width, height, x=0, y=0, id=None):
        """initializing class instance
        Note: we use private attribute getter/setters so that we can protect
        the attributes of the class

        Args:
            @width:horuzontal length of the rectangle
            @height:vertical length of the rectangle
            @x:x coordinate
            @y:y coordinate
            ud:identity of each class object
        """
        self.width = width
        self.height = height
        self.x = x
        self.y = y
        super().__init__(id)

    """private getters and setters"""
    @property
    def width(self):
        return (self.__width)

    @width.setter
    def width(self, value):
        if type(value) is not int:
            raise TypeError("width must be an in integer")
        elif value <= 0:
            raise ValueError("width must be > 0")
        self.__width = value

    @property
    def height(self):
        return (self.__height)

    @height.setter
    def height(self, value):
        if type(value) is not int:
            raise TypeError("height must be an integer")
        elif value <= 0:
            raise ValueError("height must be > 0")
        self.__height = value

    @property
    def x(self):
        return (self.__x)

    @x.setter
    def x(self, value):
        if type(value) is not int:
            raise TypeError("x must be an integer")
        elif value < 0:
            raise ValueError("x must be >= 0")
        self.__x = value

    @property
    def y(self):
        return (self.__y)

    @y.setter
    def y(self, value):
        if type(value) is not int:
            raise TypeError("y must be an integer")
        elif value < 0:
            raise ValueError("y must be >= 0")
        self.__y = value

    """public instance"""
    def area(self):
        return (self.__height * self.__width)

    def display(self):
        w = self.__width
        h = self.__height
        x = self.__x
        y = self.__y
        strr = "\n" * y
        for k in range(h):
            strr += " " * x
            strr += "#" * w + "\n"
        print(strr, end="")

    def __str__(self):
        h = self.__height
        w = self.__width
        x = self.__x
        y = self.__y
        strr = "[Rectangle] ({}) {}/{} - {}/{}".format(self.id, x, y, w, h)
        return ("".join(strr))

    def update(self, *args, **kwargs):
        if len(args) != 0 and args is not None:
            args_L = ['id', 'width', 'height', 'x', 'y']
        for k in range(len(args)):
            setattr(self, args_L[k], args[k])
        else:
            for key, value in kwargs.items():
                setattr(self, key, value)

    def to_dictionary(self):
        """return a dictionary representation of a Rectangle
        """
        alist = ['x', 'y', 'id', 'height', 'width']
        rec_dict = {}
        for k in alist:
            rec_dict[k] = getattr(self, k)
        return (rec_dict)
