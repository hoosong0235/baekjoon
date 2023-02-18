primes = [False] * (123456*2+1)

for i in range(2, 123456*2+1):
    is_prime = True
    for j in range(2, int(i**0.5)+1):
        if (i%j == 0):
            is_prime = False
            break
    if (is_prime):
        primes[i] = True

while (True):
    raw = int(input())
    if (raw == 0):
        break
    count = 0
    for i in range(raw+1, raw*2+1):
        if (primes[i]):
            count += 1
    print(count)