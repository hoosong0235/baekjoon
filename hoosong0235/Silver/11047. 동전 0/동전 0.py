N, K = map(int, input().split())
V = [int(input()) for _ in range(N)]
M = 0

for i in range(N-1, -1, -1):
    if V[i] <= K:
        M += K // V[i]
        K = K % V[i]
        
print(M)
