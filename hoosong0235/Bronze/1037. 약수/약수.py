N = int(input())
nums = sorted(list(map(int, input().split())))
if N % 2 == 0:
    print(nums[0] * nums[-1])
else:
    print(nums[(N - 1) // 2] ** 2)