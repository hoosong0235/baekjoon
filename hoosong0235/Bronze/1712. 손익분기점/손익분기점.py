first = input().split(" ")

fix = int(first[0])
var = int(first[1])
price = int(first[2])

if (var >= price):
    print(-1)
else:
    earn = price - var
    print(fix // earn + 1)