#!/usr/bin/python3

"""defining a singly linked list"""


class Node:
    """A Node class"""

    def __init__(self, data, next_node=None):
        """initiating a  class object to store integer data unto a nodd

        Args:
            @self:object initiator
            @data:integer data.
            @next_node:the next node
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
    """A singly linked class"""

    def __init__(self):
        """"object to initialize a linked list
        private instance
        """

        self.__head = None

    """public instance"""
    def sorted_insert(self, value):
        """you can also use

        new = Node(value, self.__head)

        """
        new = Node(value)

        if self.__head is None:
            self.__head = new
            new.next_node = None
            new.data = value

        elif self.__head.data > value:
            new.next_node = self.__head
            self.__head = new
            new.data = value

        else:
            temp = self.__head

            while temp.next_node is not None and temp.next_node.data < value:
                temp = temp.next_node
            new.next_node = temp.next_node
            temp.next_node = new
            new.data = value

    def __str__(self):
        valueList = []
        temp = self.__head

        while temp is not None:
            valueList.append(str(temp.data))
            temp = temp.next_node
        return ("\n".join(valueList))
