def NM(list, a, b):
    if b == 0:
        for i in list:
            print(i, end=" ")
        print()
        return
    for i in range(1, a+1):
        list[B-b] = i
        NM(list, a, b-1)


first = input().split()
A = int(first[0])
B = int(first[1])
my_list = [0] * B
NM(my_list, A, B)