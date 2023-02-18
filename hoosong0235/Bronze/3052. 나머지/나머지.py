count = []
for i in range(42):
    count.append(0)
    
for i in range(10):
    number = int(input())
    count[number%42] += 1

answer = 0
for i in count:
    if (i != 0):
        answer += 1

print(answer)