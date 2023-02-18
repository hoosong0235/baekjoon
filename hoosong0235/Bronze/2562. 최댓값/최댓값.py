max = 0

for i in range(9):
    number = int(input())
    if (number > max):
        max = number
        index = i+1

print(max)
print(index)