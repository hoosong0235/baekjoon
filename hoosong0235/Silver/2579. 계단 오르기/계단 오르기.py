N = int(input())
stairs = [int(input()) for _ in range(N)]
DP = [[0 for i in range(3)] for j in range(N)]

if N == 1:
    print(stairs[0])
elif N == 2:
    print(stairs[0] + stairs[1])
else:
    DP[0] = [stairs[0], 0, 0]
    DP[1] = [stairs[0] + stairs[1], stairs[1], 0]

    for i in range(2, N):
        DP[i][0] = stairs[i] + max(DP[i - 1][1], DP[i - 1][2])
        DP[i][1] = stairs[i] + DP[i - 2][0]
        DP[i][2] = stairs[i] + max(DP[i - 2][1], DP[i - 2][2])

    print(max(DP[N - 1]))
