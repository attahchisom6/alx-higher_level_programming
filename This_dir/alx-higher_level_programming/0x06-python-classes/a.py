#!/usr/bin/python3

"""defining a singly linked class"""


class Node:
    """A singly linked class"""

    def __init__(self, data, next_node=None):
        """initailizing a class object to store node data, and a pointer
        to the next node

        Args:
            @self:class instanctiator
            @data:data to store in each node
            @next_node:pointer to the next node
        """

        self.data = data
        self.next_node = next_node

    """private instances"""
    @property
    def data(self):
        return (self.__data)

    @data.setter
    def data(self, value):
        if type(value) is not int:
            raise TypeError("data must be an integer")
        else:
            self.__data = value

    @property
    def next_node(self):
        return (self.__next_node)

    @next_node.setter
    def next_node(self, value):
        if type(value) is not Node and value is not None:
            raise TypeError("next_node must be a Node object")
        else:
            self.__next_node = value


class SinglyLinkedList:
    """creating a singly linked list"""

    def __init__(self):
        """creating object to store the node
        a private instance
        """

        self.__head = None

    """public instance"""
    def sorted_insert(self, value):
        new = self.__head

        if new is None or self.__head.data >= value:
            self. __head = Node(value, self.__head)
        else:
            temp = self.__head
            while temp.next_node is not None and temp.next_node.data < value:
                temp = temp.next_node
            temp.next_node = Node(value, temp.next_node)

    def __str__(self):
        temp = self.__head
        valueList = []

        while temp is not None:
            valueList.append(str(temp.data))
            temp = temp.next_node

        return ("\n".join(valueList))
