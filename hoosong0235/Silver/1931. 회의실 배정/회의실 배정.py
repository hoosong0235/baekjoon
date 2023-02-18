N = int(input())
times = sorted([list(map(int, input().split())) for _ in range(N)], key=lambda x: (x[1], x[0]))
answer = 0

for i in range(N):
    if i == 0:
        end = times[i][1]
        answer += 1
    elif times[i][0] >= end:
        end = times[i][1]
        answer += 1

print(answer)
