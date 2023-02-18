num = int(input())

my_list = input().split()
for i in range(num):
    my_list[i] = int(my_list[i])

your_list = sorted(list(set(my_list)))
your_dict = {}

for i in range(len(your_list)):
    your_dict[your_list[i]] = i

for i in range(num):
    print(your_dict[my_list[i]], end=" ")