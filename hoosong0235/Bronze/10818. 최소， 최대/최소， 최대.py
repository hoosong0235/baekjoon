first = int(input())
second = input().split(" ")
for i in range(first):
    second[i] = int(second[i])

print(min(second), max(second))