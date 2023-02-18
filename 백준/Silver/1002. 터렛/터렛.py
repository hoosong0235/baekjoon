import sys

t = int(input())
for i in range(t):
    x1, y1, r1, x2, y2, r2 = map(int, sys.stdin.readline().split())
    distance = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** (1/2)
    a = sorted([[x1, y1, r1], [x2, y2, r2]], key=lambda x: x[2])

    if distance == 0:
        if a[0][2] - a[1][2] == 0:
            print(-1)
        else:
            print(0)
    elif distance > a[1][2]:
        if distance - (a[0][2] + a[1][2]) > 0:
            print(0)
        elif distance - (a[0][2] + a[1][2]) == 0:
            print(1)
        else:
            print(2)
    else:
        if a[1][2] - (distance + a[0][2]) > 0:
            print(0)
        elif a[1][2] - (distance + a[0][2]) == 0:
            print(1)
        else:
            print(2)
