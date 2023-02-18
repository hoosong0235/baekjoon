import sys

t = int(input())
for _ in range(t):
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    n = int(input())
    cnt = 0
    for _ in range(n):
        cx, cy, r = map(int, sys.stdin.readline().split())
        srcdis = ((x1 - cx) ** 2 + (y1 - cy) ** 2) ** (1/2)
        dstdis = ((x2 - cx) ** 2 + (y2 - cy) ** 2) ** (1/2)
        if (srcdis < r and dstdis > r) or (srcdis > r and dstdis < r):
            cnt += 1
    print(cnt)
