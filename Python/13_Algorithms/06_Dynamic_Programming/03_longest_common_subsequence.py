def longest_common_subsequence(text1, text2):
    m = len(text1)
    n = len(text2)

    dp = [[""] * (n + 1) for _ in range(m + 1)]

    for i in range(1, m + 1):
        for j in range(1, n + 1):

            if text1[i - 1] == text2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + text1[i - 1]

            else:
                if len(dp[i - 1][j]) >= len(dp[i][j - 1]):
                    dp[i][j] = dp[i - 1][j]
                else:
                    dp[i][j] = dp[i][j - 1]

    return dp[m][n]


text1 = input("Enter first string: ")
text2 = input("Enter second string: ")

result = longest_common_subsequence(text1, text2)

print("Longest Common Subsequence:", result)