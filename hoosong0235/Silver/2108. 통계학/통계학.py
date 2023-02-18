import sys

first = int(sys.stdin.readline())
array = []
count = [0] * (8000 + 1)

for i in range(first):
    num = int(sys.stdin.readline())
    array.append(num)
    count[num+4000] += 1

array.sort()

print(int(round(sum(array)/first)))
print(array[int(first//2)])
if count.count(max(count)) == 1:
    print(count.index(max(count))-4000)
else:
    count[count.index(max(count))] = 0
    print(count.index(max(count))-4000)
print(array[first-1]-array[0])

