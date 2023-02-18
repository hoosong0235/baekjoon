inputs = input().split(" ")
numbers = input().split(" ")

for i in range(int(inputs[0])):
    if (int(numbers[i]) < int(inputs[1])):
        print(numbers[i], end=" ")