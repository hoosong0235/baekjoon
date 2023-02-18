N = int(input())
distances = list(map(int, input().split()))
costs = list(map(int, input().split()))
answer = 0

for i in range(N):
    if i == 0:
        cost = costs[i]
        start = i
    elif i == N - 1:
        answer += cost * sum(distances[start:i])
    elif costs[i] < cost:
        answer += cost * sum(distances[start:i])
        cost = costs[i]
        start = i

print(answer)
