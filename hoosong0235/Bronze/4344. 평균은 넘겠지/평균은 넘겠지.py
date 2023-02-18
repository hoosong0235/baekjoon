first = int(input())

for i in range(first):
    second = input().split(" ")
    sum = 0
    len = 0
    for i in range(int(second[0])):
        sum += int(second[i+1])
        len += 1
    avg = sum/len
    
    cnt = 0
    for i in range(int(second[0])):
        if (int(second[i+1]) > avg):
            cnt += 1
    rto = cnt/len
            
    print(str(format(rto*100, ".3f"))+"%")