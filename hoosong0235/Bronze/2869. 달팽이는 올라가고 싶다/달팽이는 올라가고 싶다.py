raw = input().split(" ")

up = int(raw[0])
down = int(raw[1])
height = int(raw[2])

if (height-up)%(up-down)==0:
    print((height-up)//(up-down)+1)
else:
    print((height-up)//(up-down)+2)