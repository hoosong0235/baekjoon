first = int(input())
second = input().split()

for i in range(first):
    second[i] = int(second[i])

print((sum(second)/len(second))*(100/max(second)))