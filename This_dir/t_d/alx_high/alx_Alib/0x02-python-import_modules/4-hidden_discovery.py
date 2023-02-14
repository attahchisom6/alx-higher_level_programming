#!/usr/bin/python3
# script should not run if imported
if __name__ == "__main__":
    import hidden_4
    names = dir(hidden_4)
    for i in range(0, len(names)):
        # check for docstrings
        if names[i][0] == '_':
            i += 1
        # print names that do not start with '_'
        else:
            print("{:s}".format(names[i]))
