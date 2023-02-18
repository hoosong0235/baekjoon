N = int(input())
pole = [list(map(int, input().split())) for _ in range(N)]
pole.sort()

poleA = [line[0] for line in pole]
poleB = [line[1] for line in pole]
DP = [1 for _ in range(N)]

for i in range(0, N, 1):
    for j in range(0, i, 1):
        if poleB[j] < poleB[i]:
            DP[i] = max(DP[i], DP[j] + 1)

print(N - max(DP))
