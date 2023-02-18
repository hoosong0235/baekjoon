def d(n):
    sum = 0
    for i in str(n):
        sum += int(i)
    return n + sum


list = []
for i in range(10000):
    list.append(1)

while (1 in list):
    index = list.index(1)
    value = index + 1
    list[index] = True
    while (value <= 10000):
        list[value - 1] = False
        value = d(value)
    print(index + 1)
