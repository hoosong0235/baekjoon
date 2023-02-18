primes = []

M = int(input())
N = int(input())

for i in range(M, N+1):
    is_prime = True
    for j in range(2, int(i**0.5)+1):
        if (i%j == 0):
            is_prime = False
    if (is_prime and i!=1):
        primes.append(i)
        
if (len(primes) == 0):
    print(-1)
else:
    print(sum(primes))
    print(min(primes))