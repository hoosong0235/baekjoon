import sys

count = int(input())

for i in range(count):
    numbers = sys.stdin.readline().split(" ")
    print(int(numbers[0])+int(numbers[1]))