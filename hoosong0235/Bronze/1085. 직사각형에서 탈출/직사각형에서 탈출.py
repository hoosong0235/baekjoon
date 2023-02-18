raw = input().split(" ")
x = int(raw[0])
y = int(raw[1])
w = int(raw[2])
h = int(raw[3])

print(min(x, y, w-x, h-y))