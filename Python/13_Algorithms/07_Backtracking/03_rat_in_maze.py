def solve_maze(maze, row, col, path):
    n = len(maze)

    if row == n - 1 and col == n - 1:
        path[row][col] = 1
        return True

    if (
        row >= 0
        and row < n
        and col >= 0
        and col < n
        and maze[row][col] == 1
        and path[row][col] == 0
    ):
        path[row][col] = 1

        if solve_maze(maze, row + 1, col, path):
            return True

        if solve_maze(maze, row, col + 1, path):
            return True

        path[row][col] = 0

    return False


maze = [
    [1, 0, 0, 0],
    [1, 1, 0, 1],
    [0, 1, 0, 0],
    [1, 1, 1, 1]
]

n = len(maze)

path = [[0] * n for _ in range(n)]

if solve_maze(maze, 0, 0, path):
    print("Path found:")

    for row in path:
        print(row)
else:
    print("No path found.")