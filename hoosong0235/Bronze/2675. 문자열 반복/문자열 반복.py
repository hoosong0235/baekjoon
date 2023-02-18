first = int(input())

for i in range(first):
    second = input().split(" ")
    num = int(second[0])
    word = second[1]
    for j in word:
        for k in range(num):
            print(j, end="")
    print()