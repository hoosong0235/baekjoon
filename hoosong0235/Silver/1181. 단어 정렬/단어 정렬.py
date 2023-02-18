my_list = []
for i in range(50):
    my_list.append([])

for i in range(int(input())):
    word = input()
    my_list[len(word)-1].append(word)

for i in range(50):
    my_list[i] = list(set(my_list[i]))
    my_list[i].sort()
    for j in my_list[i]:
        print(j)
