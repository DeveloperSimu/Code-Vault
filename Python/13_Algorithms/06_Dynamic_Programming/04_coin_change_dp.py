coins = [1, 2, 5]

amount = int(input("Enter amount: "))

dp = [float("inf")] * (amount + 1)

dp[0] = 0

for current_amount in range(1, amount + 1):

    for coin in coins:

        if coin <= current_amount:
            dp[current_amount] = min(
                dp[current_amount],
                dp[current_amount - coin] + 1
            )

if dp[amount] == float("inf"):
    print("Amount cannot be formed.")
else:
    print("Minimum coins required:", dp[amount])