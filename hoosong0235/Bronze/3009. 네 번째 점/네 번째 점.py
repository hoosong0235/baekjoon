xs = []
ys = []

for i in range(3):
    raw = input().split(" ")
    xs.append(raw[0])
    ys.append(raw[1])
        
x = 0
y = 0

for i in xs:
    if xs.count(i) == 1:
        x = i
for i in ys:
    if ys.count(i) == 1:
        y = i

print(x, y)