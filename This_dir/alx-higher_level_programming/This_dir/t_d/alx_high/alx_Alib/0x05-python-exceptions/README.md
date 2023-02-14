There are (at least) two distinguishable kinds of errors in Python: *syntax errors* and *exceptions*.

**Syntax errors**, also known as parsing errors.
The parser repeats the offending line and displays a little ‘arrow’ pointing at the earliest point in the line where the error was detected.

Even if a statement or expression is syntactically correct, it may cause an error when an attempt is made to execute it.
Errors detected during execution are called **Exceptions** and are not unconditionally fatal.
**Exceptions** come in different types, and the type is printed as part of the message: examples are `ZeroDivisionError`, `NameError` and `TypeError`.

This README decribes what each script/program is doing:

The file `0-safe_print_list.py` is a program that prints `x` elements of a list.

The file `1-safe_print_integer.py` is a program that prints an integer with `"{:d}".format()`.

The file `2-safe_print_list_integers.py` is a program that prints the first x elements of a list and only integers.

The file `3-safe_print_division.py` is a program that divides 2 integers and prints the result.

The file `4-list_division.py` is a program that divides element by element 2 lists.

The file `5-raise_exception.py` is a program that raises a type exception.

The file `6-raise_exception_msg.py` is a program that raises a name exception with a message.

The file `100-safe_print_integer_err.py` is a program that prints an integer.

The file `101-safe_function.py` is a program that executes a function safely.

The file `102-magic_calculation.py` is the source code of a given Python bytecode.
