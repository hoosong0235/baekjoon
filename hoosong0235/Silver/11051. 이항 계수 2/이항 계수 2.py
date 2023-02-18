N, K = map(int, input().split())
Ns = 1
Ks = 1

for i in range(K, 0, -1):
    Ns *= N
    Ks *= i
    N -= 1

print((Ns // Ks) % 10007)