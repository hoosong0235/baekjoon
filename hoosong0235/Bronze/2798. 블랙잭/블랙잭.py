std = int(input().split(" ")[1])
nums = input().split(" ")
for i in range(len(nums)):
    nums[i] = int(nums[i])

maxnum = 0
for i in nums:
    for j in nums:
        for k in nums:
            if std >= i + j + k > maxnum and i != j and j != k and k != i:
                maxnum = i + j + k

print(maxnum)