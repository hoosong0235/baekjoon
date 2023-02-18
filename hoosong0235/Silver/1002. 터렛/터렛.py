repeat = int(input())

for i in range(repeat):
    raw = input().split(" ")
    first = raw[:3]
    second = raw[3:]
    
    distance = ((int(second[0])-int(first[0]))**2 + (int(second[1])-int(first[1]))**2)**0.5
    sigma = int(second[2])+int(first[2])
    
    
    if (first == second):
        print(-1)
    elif (distance < sigma):
        if (distance < abs(int(second[2])-int(first[2]))):
            print(0)
        elif (distance == abs(int(second[2])-int(first[2]))):
            print(1)
        else:
            print(2)
    elif (distance > sigma):
        print(0)
    else:
        print(1)