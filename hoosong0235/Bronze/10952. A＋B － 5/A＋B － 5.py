while (True):
    numbers = input().split(" ")
    if numbers == ["0", "0"]:
        break
    else:
        print(int(numbers[0])+int(numbers[1]))