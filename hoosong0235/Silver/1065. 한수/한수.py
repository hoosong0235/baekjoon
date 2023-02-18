def is_sequence(n):
    if (n<=99):
        return True
    else:
        d = int(str(n)[1])-int(str(n)[0])
        for i in range(len(str(n))-1):
            if (int(str(n)[i]) + d != int(str(n)[i+1])):
                return False
        return True

first = int(input())
count = 0

for i in range(1, 1+first):
    if (is_sequence(i)):
        count += 1

print(count)
    