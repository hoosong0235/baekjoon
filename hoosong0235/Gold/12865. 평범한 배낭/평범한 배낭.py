N, K = map(int, input().split())
DP = [[0 for i in range(K + 1)] for j in range(N + 1)]

for n in range(1, N + 1):
    w, v = map(int, input().split())
    for k in range(1, K + 1):
        if w > k:
            DP[n][k] = DP[n - 1][k]
        else:
            DP[n][k] = max(DP[n - 1][k], DP[n - 1][k - w] + v)

print(DP[N][K])
