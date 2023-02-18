from functools import reduce

def gcd(a, b):
	if a % b == 0:
		return b
	return gcd(b, a % b)


N = int(input())
nums = sorted([int(input()) for _ in range(N)])
num = nums[0]
reduced = list(map(lambda x: x - num, nums[1:]))
GCD = reduce(gcd, reduced)
divisors = [i for i in range(2, GCD + 1) if GCD % i == 0]

for i in divisors:
	print(i, end = " ")