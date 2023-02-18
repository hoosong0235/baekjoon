number = 1
for i in range(3):
    number *= int(input())

count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
for i in str(number):
    for j in range(10):
        if (i == str(j)):
            count[j] += 1
            
for i in count:
    print(i)
        