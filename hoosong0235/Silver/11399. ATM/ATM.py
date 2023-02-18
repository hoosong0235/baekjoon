N = int(input())
times = sorted(list(map(int, input().split())))
answer = 0

for i in range(N):
    answer += times[i] * (N - i)

print(answer)
