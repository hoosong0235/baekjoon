my_list = []

for i in range(int(input())):
    my_list.append(input().split(" "))
    my_list[i][0], my_list[i][1] = int(my_list[i][1]), int(my_list[i][0])

my_list.sort()

for i in my_list:
    print(i[1], i[0])