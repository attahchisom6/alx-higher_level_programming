#!/usr/bin/python3

"""a grandchiild class inheriting from rectangle"""

from models.rectangle import Rectangle


class Square(Rectangle):
    """class constructor"""
    def __init__(self, size, x=0, y=0, id=None):
        super().__init__(size, size, x, y, id)

    def __str__(self):
        x = self.x
        y = self.y
        w = self.width

        strr = "[Square] ({}) {}/{} - {}".format(self.id, x, y, w)
        return ("".join(strr))

    """public getter and setter"""
    @property
    def size(self):
        return (self.width)

    @size.setter
    def size(self, value):
        self.width = value
        self.height = value

    def update(self, *args, **kwargs):
        args_L = ['id', 'size', 'x', 'y']
        if len(args) != 0 and args is not None:
            for k in range(len(args)):
                if args_L[k] == 'size':
                    setattr(self, 'width', args[k])
                    setattr(self, 'height', args[k])
                else:
                    setattr(self, args_L[k], args[k])
        else:
            for key, value in kwargs.items():
                setattr(self, key, value)

    def to_dictionary(self):
        sq_dict = {'id': self.id, 'x': self.x, 'size': self.size, 'y': self.y}
        return (sq_dict)
