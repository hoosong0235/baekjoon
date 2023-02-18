a = input()
b = input()
DP = [[0 for i in range(len(a) + 1)] for j in range(len(b) + 1)]

for i in range(1, len(b) + 1):
    is_added = False
    for j in range(1, len(a) + 1):
        if a[j - 1] == b[i - 1]:
            DP[i][j] = DP[i - 1][j - 1] + 1
        else:
            DP[i][j] = max(DP[i - 1][j], DP[i][j - 1])

print(max([max(line) for line in DP]))