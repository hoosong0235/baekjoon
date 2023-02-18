n = int(input())

counts = {}
for element in map(int, input().split()):
    if element in counts:
        counts[element] += 1
    else:
        counts[element] = 1

m = int(input())

for element in map(lambda x: counts.get(int(x), 0), input().split()):
    print(element, end=' ')
