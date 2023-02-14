#!/usr/bin/python3

class C:
    pass

def un_pred(obj):
    """return a list of objects

    >>> un_pred(C()) #doctest: +ELLIPSIS
    [<elips.C object at 0x...>]

    thats it
    """
    return [obj]

if __name__ == "__main__":
    import doctest
    doctest.testmod()
