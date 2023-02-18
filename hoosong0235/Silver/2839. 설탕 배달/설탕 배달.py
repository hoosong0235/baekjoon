raw = int(input())

fix = [2, 3, 2, 3, 4]
var = (raw-8)//5

if (raw in [4, 7]):
    print(-1)
elif (raw in [3, 5]):
    print(1)
elif (raw == 6):
    print(2)
else:
    print(fix[(raw-8)%5]+var)