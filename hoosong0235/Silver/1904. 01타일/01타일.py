def C(n):
    if c[n] != 0:
        return c[n]
    else:
        for i in range(2, n + 1):
            c[i] = (c[i - 1] + c[i - 2]) % 15746
        return c[n]


n = int(input())
c = [0 for _ in range(n + 1)]
c[0] = 1
c[1] = 1
print(C(n))
