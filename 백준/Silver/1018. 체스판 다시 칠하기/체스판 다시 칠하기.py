n, m = map(int, input().split())
arr = [list(input()) for i in range(n)]
mincnt = 64

for r in range(n - 7):
    for c in range(m - 7):
        cntb = 0
        cntw = 0
        for i in range(r, r + 8):
            for j in range(c, c + 8):
                if arr[i][j] == 'W':
                    if (i + j) % 2:
                        cntb += 1
                    else:
                        cntw += 1
                elif arr[i][j] == 'B':
                    if (i + j) % 2:
                        cntw += 1
                    else:
                        cntb += 1
        cnt = min(64 - cntb, 64 - cntw)
        if cnt < mincnt:
            mincnt = cnt

print(mincnt)
