def gcd(a, b):
    if a % b == 0:
        return b
    return gcd(b, a % b)


N = int(input())
nums = list(map(int, input().split()))
num = nums[0]

for i in range(1, N):
    GCD = gcd(num, nums[i])
    print(str(num // GCD) + '/' + str(nums[i] // GCD))