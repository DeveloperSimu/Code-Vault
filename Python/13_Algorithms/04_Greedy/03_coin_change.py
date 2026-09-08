coins = [25, 10, 5, 1]

amount = int(input("Enter amount: "))

result = []

for coin in coins:
    while amount >= coin:
        amount -= coin
        result.append(coin)

print("Coins used:", result)
print("Number of coins:", len(result))