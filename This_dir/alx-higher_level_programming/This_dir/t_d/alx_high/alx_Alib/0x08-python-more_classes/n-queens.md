<img src="https://github.com/ajipelumi/alx-higher_level_programming/blob/dd89a00435fdf4172c36431afc9237fd372315c9/images/n-queens.png" alt="N Queens" width="400">
Image Credit: GeeksForGeeks

##

The N **Queens** puzzle is the challenge of placing N non-attacking queens on an **N×N chessboard**.

This is a breakdown of how I approached and solved the task.

## Documentation
- Usage: `nqueens N`
  - If the user called the program with the wrong number of arguments, print `Usage: nqueens N`, followed by a new line, and exit with the status `1`
- where N must be an integer greater or equal to `4`
  - If N is not an integer, `print N must be a number`, followed by a new line, and exit with the status `1`
  - If N is smaller than `4`, `print N must be at least 4`, followed by a new line, and exit with the status `1`
- The program should print every possible solution to the problem
  - One solution per line
  - You don’t have to print the solutions in a specific order
- You are only allowed to import the `sys` module

### Format
```python
N Queens$ ./101-nqueens.py 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]

N Queens$ ./101-nqueens.py 6
[[0, 1], [1, 3], [2, 5], [3, 0], [4, 2], [5, 4]]
[[0, 2], [1, 5], [2, 1], [3, 4], [4, 0], [5, 3]]
[[0, 3], [1, 0], [2, 4], [3, 1], [4, 5], [5, 2]]
[[0, 4], [1, 2], [2, 0], [3, 5], [4, 3], [5, 1]]
```

## Approach
There are different techniques to solving this problem however I employed **backtracking** because of its effectiveness and simplicity.
Here is how *backtracking* works:
1. We start by placing a queen in the *first column* of the *first row*.
2. Then, we try to place a queen in the *first column* of the *second row*.
If this is not possible (because it would be attacking another queen), we move on to the next column and try again.
3. We continue this process until we have placed a queen in every row, or until it is not possible to place a queen in any of the remaining rows.
4. If we were able to place a queen in every row, it implies there is a solution to the problem (there can be multiple solutions).
If not, we go back to the last queen that was placed and move it to the next column. Then, we try to place the remaining queens again,
starting from the row where we left off.
5. This process is repeated until we have either found a solution or determined that no solution exists.

## Pseudocode
- import sys module.
- check for number of arguments passed to the command-line (length of arguments should be 2).
- check if the argument passed is an integer.
- check if integer is greater than 4 (our documentation requires that N must be greater than or equal to 4).
- define global variable `board` to position our queens.
- define `col` set that keeps track of each queens position on every column.

<img src="https://github.com/ajipelumi/alx-higher_level_programming/blob/e3710814331b632aef73d939b6303f2cd3ae145b/images/col_nqueens.png" alt="N Queens Column">

- define `posDiag` set that keeps track of each queens positive diagonals.

<img src="https://github.com/ajipelumi/alx-higher_level_programming/blob/e3710814331b632aef73d939b6303f2cd3ae145b/images/pos_nqueens.png" alt="N Queens PosDiag">

- define `negDiag` set that keeps track of each queens negative diagonals.

<img src="https://github.com/ajipelumi/alx-higher_level_programming/blob/e3710814331b632aef73d939b6303f2cd3ae145b/images/neg_nqueens.png" alt="N Queens NegDiag">

- call our backtrack function which takes the following parameters:
  - r: represents row 0 which is our starting point
  - n: is our N chessboard
  - col: our column set
  - posDiag: positive diagonals
  - negDiag: negative diagonals
  
 - because `backtrack` is a recursive function, we set a base condition for the recursion to end when there are no more rows.
 - at that point we want to print all posiible solutions so we call the `result` function.
 - inside `backtrack`, we traverse through n columns and check if the queen's position is in *col*, *posDiag* or *negDiag*, if a position is found in any of them this would mean that the queen faces an attack from one of the other queens so the queen is moved to the next column.
 - board is updated to *1* to indicate that a queen is present in that position.
 - backtrack is called again but row increases by 1.
 - if the columns are exhausted and there is no where to place the queen, the previous queen is called and her position is changed, the board is also updated to *0* to reflect that change.
 
 
## Source Code
Click [101-nqueens.py](https://github.com/ajipelumi/alx-higher_level_programming/blob/dd89a00435fdf4172c36431afc9237fd372315c9/0x08-python-more_classes/101-nqueens.py) to see the source code which is also located in this directory.

To use code, download and make file executable then run with argument.

Thank you.
