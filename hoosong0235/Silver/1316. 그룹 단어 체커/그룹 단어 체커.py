def is_groupWord(word):
    temp_list = []
    for i in range(len(word)):
        if (i == 0):
            temp_list.append(word[i])
        else:
            if (word[i] == word[i-1]):
                pass
            else:
                if (word[i] in temp_list):
                    return 0
                else:
                    temp_list.append(word[i])
    return 1
                    
first = int(input())
count = 0
for i in range(first):
    second = input()
    count += is_groupWord(second)
    
print(count)