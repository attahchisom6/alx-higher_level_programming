**Python** has a way to put definitions in a file and use them in a script or in an interactive instance of the interpreter.
Such a file is called a *module*; definitions from a module can be *imported* into other modules or into the *main* module (the collection of variables that you have access to in a script executed at the top level and in calculator mode).

A **module** is a file containing Python definitions and statements. The file name is the module name with the suffix `.py` appended. Within a module, the module’s name (as a string) is available as the value of the global variable `__name__`.

This README decribes what each script/program is doing:

The file `0-add.py` is a program that imports the function `def add(a, b):` from the file `add_0.py` and prints the result of the addition `1 + 2 = 3`.

The file `1-calculation.py` is a program that imports functions from the file `calculator_1.py`, does some Maths, and prints the result.

The file `2-args.py` is a program that prints the number of and the list of its arguments.

The file `3-infinite_add.py` is a program that prints the result of the addition of all arguments.

The file `4-hidden_discovery.py` is a program that prints all the names defined by the compiled module [hidden_4.pyc](https://github.com/holbertonschool/0x02.py/raw/master/hidden_4.pyc).

The file `5-variable_load.py` is a program that imports the variable `a` from the file `variable_load_5.py` and prints its value.

The file `100-my_calculator.py` is a program that imports all functions from the file `calculator_1.py` and handles basic operations.

The file `101-easy_print.py` is a program that prints `#pythoniscool`, followed by a new line, in the standard output.

The file `102-magic_calculation.py` is the source code of a given Python bytecode.

The file `103-fast_alphabet.py` is a program that prints the alphabet in uppercase, followed by a new line.
