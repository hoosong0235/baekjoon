num = input()
does_answer_exist = False

for i in range(1, int(num)):
    sum = i
    for j in range(len(str(i))):
        sum += int(str(i)[j])
    if sum == int(num):
        print(i)
        does_answer_exist = True
        break

if not does_answer_exist:
    print(0)