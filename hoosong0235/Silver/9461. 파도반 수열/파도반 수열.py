def L(n):
    if l[n] != 0:
        return l[n]
    else:
        l[n] = L(n - 2) + L(n - 3)
        return l[n]


N = int(input())
l = [0 for _ in range(100 + 1)]
l[1] = 1
l[2] = 1
l[3] = 1

for i in range(N):
    M = int(input())
    print(L(M))