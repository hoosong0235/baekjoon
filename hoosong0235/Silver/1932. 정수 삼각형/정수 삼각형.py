N = int(input())
triangle = [list(map(int, input().split())) for _ in range(N)]
DP = [[0 for i in range(j + 1)]for j in range(N)]
DP[0][0] = triangle[0][0]

for i in range(1, N):
    for j in range(i + 1):
        if j == 0:
            DP[i][j] = triangle[i][j] + DP[i - 1][j]
        elif j == i:
            DP[i][j] = triangle[i][j] + DP[i - 1][j - 1]
        else:
            DP[i][j] = triangle[i][j] + max(DP[i - 1][j - 1], DP[i - 1][j])

print(max(DP[N - 1]))
