while (True):
    try:
        numbers = input().split(" ")
        print(int(numbers[0])+int(numbers[1]))
    except EOFError:
        break