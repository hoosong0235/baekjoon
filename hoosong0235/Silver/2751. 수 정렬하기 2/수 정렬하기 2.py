first = int(input())
my_list = []

for i in range(first):
    my_list.append(int(input()))
    
my_list.sort()

for i in my_list:
    print(i)