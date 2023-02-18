first = int(input())

for i in range(first):
    OXs = input()
    score = 0
    delta = 0
    for j in OXs:
        if (j == "O"):
            delta += 1
            score += delta
        else:
            delta = 0
    print(score)