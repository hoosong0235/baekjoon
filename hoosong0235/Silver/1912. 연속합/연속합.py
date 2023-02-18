N = int(input())
nums = list(map(int, input().split()))
DP = [0 for _ in range(N)]

DP[0] = nums[0]
for i in range(1, N):
    DP[i] = max(nums[i], nums[i] + DP[i - 1])

print(max(DP))
