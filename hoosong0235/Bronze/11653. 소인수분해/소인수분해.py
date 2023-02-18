num = int(input())

while (num != 1):
    div = 2
    while (num%div!=0 and div<=int(num**0.5)):
        div += 1
    if (num%div==0):
        print(div)
        num = num//div
    else:
        print(num)
        num = 1