answer = input()
number = answer
count = 1

while (True):
    if (len(number) == 1):
        number = "0" + number
    number = number[1] + str(int(number[0])+int(number[1]))[-1]
    if (int(answer) == int(number)):
        break
    count += 1

print(count)