raw = int(input())
data = (raw-1) / 6

delta = 1
count = 0

while (data!=0):
    if (count < data and data <= count+delta):
        break
    count += delta
    delta += 1

if (data == 0):
    print(1)
else:
    print(delta+1)