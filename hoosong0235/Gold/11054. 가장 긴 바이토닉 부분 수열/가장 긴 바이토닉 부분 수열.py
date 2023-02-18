N = int(input())
sequence = list(map(int, input().split()))
increaseDP = [1 for _ in range(N)]
decreaseDP = [1 for _ in range(N)]

for i in range(N):
    for j in range(0, i, 1):
        if sequence[i] > sequence[j]:
            increaseDP[i] = max(increaseDP[i], increaseDP[j] + 1)

for i in range(N-1, -1, -1):
    for j in range(i + 1, N, 1):
        if sequence[i] > sequence[j]:
            decreaseDP[i] = max(decreaseDP[i], decreaseDP[j] + 1)

print(max([increaseDP[i] + decreaseDP[i] for i in range(N)]) - 1)
