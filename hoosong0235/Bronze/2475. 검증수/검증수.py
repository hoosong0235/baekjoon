raw = input().strip().split(" ")

ver = 0

for i in range(len(raw)):
    ver += int(raw[i])**2
    
print(ver%10)