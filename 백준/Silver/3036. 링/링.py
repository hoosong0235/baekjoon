import math

n = int(input())
arr = list(map(int, input().split()))

ring = arr[0]
for i in range(1, len(arr)):
    gcd = math.gcd(ring, arr[i])
    print(f'{ring//gcd}/{arr[i]//gcd}')
