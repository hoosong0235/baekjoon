raw = int(input())

count = 0
delta = 1

while True:
    if (count < raw and raw <= count+delta):
        up = raw - count
        down = (delta + 1) - up
        if (delta % 2 == 0):
            print(str(up)+"/"+str(down))
        else:
            print(str(down)+"/"+str(up))
        break
    count += delta
    delta += 1