number = int(input("Enter number of terms: "))

if number <= 0:
    print("Please enter a positive number.")
else:
    dp = [0] * number

    if number >= 1:
        dp[0] = 0

    if number >= 2:
        dp[1] = 1

    for i in range(2, number):
        dp[i] = dp[i - 1] + dp[i - 2]

    print("Fibonacci series:", dp)