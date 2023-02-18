num = input()

for i in range(len(num)):
    max = num[i]
    max_index = i
    for j in range(i+1, len(num)):
        if num[j] > max:
            max = num[j]
            max_index = j
    if max_index != i:
        num = num[:i]+max+num[i+1:max_index]+num[i]+num[max_index+1:]

print(num)