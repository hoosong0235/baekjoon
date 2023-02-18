def is_sudoku(m, n, k):
    for l in range(9):
        if board[l][n] == k or board[m][l] == k:
            return False
    for i in range((m//3)*3, (m//3+1)*3):
        for j in range((n//3)*3, (n//3+1)*3):
            if board[i][j] == k:
                return False
    return True


def put_number_at_nth_blank(n):
    global is_answered

    if n == N and not is_answered:
        for row in board:
            for num in row:
                print(num, end=" ")
            print()
        is_answered = True
        return
    for i in range(1, 10):
        if is_sudoku(blanks[n][0], blanks[n][1], i) and not is_answered:
            board[blanks[n][0]][blanks[n][1]] = i
            put_number_at_nth_blank(n+1)
            board[blanks[n][0]][blanks[n][1]] = 0


board = []
for i in range(9):
    line = input().split()
    for j in range(9):
        line[j] = int(line[j])
    board.append(line)

N = 0
blanks = []
for i in range(9):
    for j in range(9):
        if board[i][j] == 0:
            blanks.append([i, j])
            N += 1

is_answered = False

put_number_at_nth_blank(0)