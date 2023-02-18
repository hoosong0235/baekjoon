def mcf(low, high):
    nam = high % low
    if nam == 0:
        return low
    return mcf(nam, low)


N = int(input())
for i in range(N):
    nums = list(map(int, input().split()))
    mmcf = mcf(min(nums), max(nums))
    print(nums[0] * nums[1] // mmcf)