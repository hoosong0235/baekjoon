N = int(input())
RGB = [list(map(int, input().split())) for _ in range(N)]
DP = [[0 for i in range(3)] for j in range(N)]

for i in range(3):
    DP[0][i] = RGB[0][i]

for i in range(1, N):
    for j in range(3):
        if j == 0:
            DP[i][j] = RGB[i][j] + min(DP[i - 1][1], DP[i - 1][2])
        elif j == 1:
            DP[i][j] = RGB[i][j] + min(DP[i - 1][0], DP[i - 1][2])
        else:
            DP[i][j] = RGB[i][j] + min(DP[i - 1][0], DP[i - 1][1])

print(min(DP[N - 1]))
