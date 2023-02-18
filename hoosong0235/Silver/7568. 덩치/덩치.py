first = int(input())
size_list = []
rank_list = []
for i in range(first):
    size_list.append(input().split(" "))

for i in size_list:
    bigger_num = 0
    for j in size_list:
        if int(i[0]) < int(j[0]) and int(i[1]) < int(j[1]):
            bigger_num += 1
    rank_list.append(bigger_num+1)

for i in rank_list:
    print(i, end=" ")
