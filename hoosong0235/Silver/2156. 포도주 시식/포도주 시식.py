N = int(input())
amount = [int(input()) for _ in range(N)]

if N == 1:
    print(amount[0])
elif N == 2:
    print(amount[0] + amount[1])
else:
    DP = [[0 for i in range(2)] for j in range(N)]
    DP[0] = [amount[0], 0]
    DP[1] = [amount[0] + amount[1], amount[1]]

    for i in range(2, N):
        for j in range(2):
            if j == 0:
                DP[i][j] = amount[i] + DP[i - 1][1]
            else:
                DP[i][j] = amount[i] + max(max([DP[k][1] for k in range(0, i - 1)]), max([DP[k][0] for k in range(0, i - 1)]))

    print(max(max(DP[-1]), max(DP[-2])))
