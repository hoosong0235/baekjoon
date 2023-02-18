def h(f,b,c):
    if (f==1):
        print(b,c)
    else:
        h(f-1, b, 6-b-c)
        print(b, c)
        h(f-1, 6-b-c, c)
        
f = int(input())
n = 2**f-1

print(n)
h(f, 1, 3)