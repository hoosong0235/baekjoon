repeat = int(input())

for i in range(repeat):
    raw = input().split(" ")
    distance = int(raw[1]) - int(raw[0])
    
    delta = 1
    x = 0
    y = 0
    
    while True:
        if (x <= distance and distance < x+delta):
            break
        x += delta
        y += 1
        if (x <= distance and distance < x+delta):
            break
        x += delta
        y += 1
        delta += 1
    
    if (x == distance):
        print(y)
    else:
        print(y+1)