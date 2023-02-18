import math
import sys

t = int(input())
arr = list(sorted(map(int, sys.stdin.read().split())))

diff_arr = list()
for i in range(len(arr) - 1):
    diff_arr.append(arr[i + 1] - arr[i])

gcd = diff_arr[0]
for diff in diff_arr:
    gcd = math.gcd(gcd, diff)

fact_arr = [gcd]
for i in range(2, int(math.sqrt(gcd)) + 1):
    if gcd % i == 0:
        fact_arr.append(i)
        if gcd // i != i:
            fact_arr.append(gcd // i)

fact_arr.sort()
for fact in fact_arr:
    print(fact, end=' ')
