one = ["WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"]
two = ["BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"]

board = []
minnum = 64
nums = input().split(" ")
row = int(nums[0])
col = int(nums[1])

for i in range(row):
    board.append(input())

for r in range(row-7):
    for c in range(col-7):
        onenum = 0
        twonum = 0
        for i in range(8):
            for j in range(8):
                if one[i][j] != board[r+i][c+j]:
                    onenum += 1
                if two[i][j] != board[r+i][c+j]:
                    twonum += 1
        if min(onenum, twonum) < minnum:
            minnum = min(onenum, twonum)

print(minnum)