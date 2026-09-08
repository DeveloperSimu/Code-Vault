weights = [1, 3, 4, 5]
values = [1, 4, 5, 7]

capacity = 7

n = len(weights)

dp = [[0] * (capacity + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    for w in range(1, capacity + 1):

        if weights[i - 1] <= w:
            dp[i][w] = max(
                values[i - 1] + dp[i - 1][w - weights[i - 1]],
                dp[i - 1][w]
            )

        else:
            dp[i][w] = dp[i - 1][w]

print("Maximum value:", dp[n][capacity])