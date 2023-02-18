N, K = map(int, input().split())
answer = 1

for i in range(K, 0, -1):
    answer *= N
    answer /= i
    N -= 1

print(round(answer))