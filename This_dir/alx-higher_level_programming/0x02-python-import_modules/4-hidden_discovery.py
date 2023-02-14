#!/usr/bin/python3

if __name__ == "__main__":
    """list of all the names not starting with ___"""

    import hidden_4

    for name in dir(hidden_4):
        if name[:2] != '__':
            print(name)
