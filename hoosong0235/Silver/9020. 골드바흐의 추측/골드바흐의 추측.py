primes = [False] * 10001

for i in range(2, 10001):
    is_prime = True
    for j in range(2, int(i**0.5)+1):
        if (i%j == 0):
            is_prime = False
            break
    if (is_prime):
        primes[i] = True
        
repeat = int(input())

for r in range(repeat):
    num = int(input())
    for i in range(num//2):
        if (primes[(num//2)-i] and primes[(num//2)+i]):
            print((num//2)-i, (num//2)+i)
            break