repeat = int(input())

for i in range(repeat):
    raw = input().split(" ")
    floor = int(raw[0])
    count = int(raw[2])
    
    if (count%floor == 0):
        customer_floor = floor
        customer_room = count//floor
    else:
        customer_floor = count%floor
        customer_room = (count//floor)+1
        
    if (customer_room <= 9):
        print(str(customer_floor)+"0"+str(customer_room))
    else:
        print(str(customer_floor)+str(customer_room))