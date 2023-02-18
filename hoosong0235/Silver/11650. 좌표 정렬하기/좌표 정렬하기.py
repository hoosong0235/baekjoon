my_list = []

for i in range(int(input())):
    my_list.append(input().split(" "))
    for j in range(2):
        my_list[i][j] = int(my_list[i][j])

my_list.sort()

for i in my_list:
    print(i[0], i[1])