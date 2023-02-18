repeat = int(input())

primes = []

for i in range(2, 1001):
    is_prime = True
    for j in range(1, i):
        if (i!=j and j!= 1 and i%j == 0):
            is_prime = False
    if (is_prime):
        primes.append(i)

nums = input().split(" ")
count = 0

for i in nums:
    if (int(i) in primes):
        count += 1
        
print(count)