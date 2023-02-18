import sys

count = int(input())

for i in range(1, count+1):
    numbers = sys.stdin.readline().split()
    print("Case #"+str(i)+":", int(numbers[0])+int(numbers[1]))