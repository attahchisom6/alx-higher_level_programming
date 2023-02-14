#!/usr/bin/python3
""" This module defines a node of a singly linked list. """


class Node:
    """ Defines a node. """
    def __init__(self, data, next_node=None):
        """ Initializes the data. """
        self.data = data
        self.next_node = next_node

    @property
    def data(self):
        """ Retrieve data. """
        return self.__data

    @data.setter
    def data(self, value):
        """ Set property. """
        if type(value) is not int:
            raise TypeError("data must be an integer")
        self.__data = value

    @property
    def next_node(self):
        """ Retrieve next_node. """
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        """ Set property. """
        if value is not None and type(value) is not Node:
            raise TypeError("next_node must be a Node object")
        self.__next_node = value


class SinglyLinkedList:
    """ Defines a singly linked list. """

    def __init__(self):
        """ Initializes the data. """
        self.__head = None

    def __str__(self):
        """ Print the entire list in STDOUT. """
        str = ''
        if self.__head is None:  # linked list is empty
            return str
        else:
            n = self.__head
            while n is not None:  # traverse through linked list
                str += "{}".format(n.data)  # store data
                if n.next_node is not None:
                    str += '\n'  # newline
                n = n.next_node
        return str

    def sorted_insert(self, value):
        """ Inserts a new Node into the correct sorted position. """
        new_node = Node(value)  # create a node
        new_node.next_node = self.__head  # insert node at beginning
        self.__head = new_node

        nodes = []  # create list
        n = self.__head
        while n:  # traverse through linked list
            nodes.append(n.data)  # append list data
            n = n.next_node

        nodes.sort()  # sort list

        n = self.__head
        i = 0
        while n:  # traverse through linked list
            n.data = nodes[i]  # input sorted data
            i += 1
            n = n.next_node

        return self.__head
