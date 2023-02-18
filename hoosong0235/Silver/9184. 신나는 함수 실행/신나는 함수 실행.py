def w(a, b, c):
    if a <= 0 or b <= 0 or c <= 0:
        if W[0][0][0] != 0:
            return W[0][0][0]
        else:
            W[0][0][0] = 1
            return W[0][0][0]
    elif a > 20 or b > 20 or c > 20:
        if W[20][20][20] != 0:
            return W[20][20][20]
        else:
            W[20][20][20] = w(20, 20, 20)
            return W[20][20][20]
    elif a < b < c:
        if W[a][b][c] != 0:
            return W[a][b][c]
        else:
            W[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c)
            return W[a][b][c]
    else:
        if W[a][b][c] != 0:
            return W[a][b][c]
        else:
            W[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1)
            return W[a][b][c]


W = [[[0 for i in range(21)] for i in range(21)] for i in range(21)]

while True:
    nums = list(map(int, input().split()))
    if nums == [-1, -1, -1]:
        break
    else:
        print("w(%d, %d, %d) = %d" % (nums[0], nums[1], nums[2], w(nums[0], nums[1], nums[2])))
