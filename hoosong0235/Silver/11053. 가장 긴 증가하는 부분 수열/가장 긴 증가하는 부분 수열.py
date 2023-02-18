N = int(input())
sequence = list(map(int, input().split()))
DP = [1 for _ in range(N)]

for i in range(N):
    for j in range(i):
        if sequence[i] > sequence[j]:
            DP[i] = max(DP[i], DP[j] + 1)

print(max(DP))
