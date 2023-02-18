n = int(input())
arr = set(map(int, input().split()))

m = int(input())
for element in map(int, input().split()):
    print(1 if element in arr else 0, end=' ')
