def solve_n_queens(n):
    board = [["."] * n for _ in range(n)]

    def is_safe(row, col):
        for i in range(row):
            if board[i][col] == "Q":
                return False

            if col - (row - i) >= 0:
                if board[i][col - (row - i)] == "Q":
                    return False

            if col + (row - i) < n:
                if board[i][col + (row - i)] == "Q":
                    return False

        return True

    def backtrack(row):
        if row == n:
            return True

        for col in range(n):
            if is_safe(row, col):
                board[row][col] = "Q"

                if backtrack(row + 1):
                    return True

                board[row][col] = "."

        return False

    if backtrack(0):
        for row in board:
            print(" ".join(row))
    else:
        print("No solution exists.")


n = int(input("Enter number of queens: "))

if n <= 0:
    print("Please enter a positive number.")
else:
    solve_n_queens(n)