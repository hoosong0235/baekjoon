n = int(input())

for i in range(n + 1):
    ans, sum = i, i
    while i:
        sum += i % 10
        i = i // 10
    if (sum == n):
        print(ans)
        exit(0)

print(0)
