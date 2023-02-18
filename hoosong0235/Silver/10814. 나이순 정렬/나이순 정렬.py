from operator import itemgetter

my_list = []

for i in range(int(input())):
    my_list.append(input().split(" "))
    my_list[i][0] = int(my_list[i][0])

my_list_sorted = sorted(my_list, key=itemgetter(0))

for i in my_list_sorted:
    print(i[0], i[1])
