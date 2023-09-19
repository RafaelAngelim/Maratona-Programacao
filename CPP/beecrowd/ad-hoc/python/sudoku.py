from functools import reduce
def line(sudoku, x):
    num = set(sudoku[x])
    return len(num) == 9
def collumn(sudoku, x):
    num = set([sudoku[i][x] for i in range(9)])
    return len(num) == 9
def block(sudoku, x):
    line, collumn = 3*(x//3), 3*(x%3)
    num = set(list(reduce(list.__add__, [l[collumn:(collumn + 3)] for l in sudoku[line:(line + 3)]])))
    return len(num) == 9
n = int(input())
for k in range(1, n + 1):
    sudoku = []
    for i in range(9):
        sudoku.append([int(x) for x in input().strip().split(' ')])
    print(f"Instancia {k}")
    answ = "SIM"
    for i in range(9):
        if(not line(sudoku, i) or not collumn(sudoku, i) or not block(sudoku, i)):
            answ = "NAO"   
    print(answ)
    print()