import sys

count = int(input())

for i in range(1, count+1):
    numbers = sys.stdin.readline().strip().split(" ")
    print("Case #"+str(i)+": "+numbers[0]+" + "+numbers[1]+" = "+str(int(numbers[0])+int(numbers[1])))