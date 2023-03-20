#!/usr/bin/python3
"""
will passed arguments of the form:
    'classname Id "hello" "world"
    or
    class name Id {"hello": hi, "good": bad}'
into its list correspondent
"""

def parse_arg(args):
    """this function will restructure arguments passed to it
    """
    if args is None:
        return

    arg_list = []
    #isolate the command
    args_a = args.partition(" ")
    if args_a[0]:
        command = args_a[0]

    #isolate the id
    args_b = args_a[2].partition(" ")
    if args_b[0]:
        this_id = args_b[0]

    #checks if its a dictionary
    if '{' in args_b[2] and '}' in args_b[2] and type(eval(args_b[2])) is dict:
        kwargs = args_b[2]
        for k, v in kwargs.items():
            arg_list.append(k)
            arg_list.append(v)

    else:
        """since it isnt a dictionary, check if the argument contains " or not
        and restructure it
        """
        args2 = args_a[2]
        if arg2 and arg
