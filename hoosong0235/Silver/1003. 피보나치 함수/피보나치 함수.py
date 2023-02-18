def F0(n):
    if n == 0:
        return 1
    elif n == 1:
        return 0
    else:
        fs = [1, 0]
        for i in range(2, n + 1):
            fs.append(fs[i - 1] + fs[i - 2])
        return fs[n]


def F1(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        fs = [0, 1]
        for i in range(2, n + 1):
            fs.append(fs[i - 1] + fs[i - 2])
        return fs[n]


N = int(input())
for i in range(N):
    f = int(input())
    print(F0(f), F1(f))