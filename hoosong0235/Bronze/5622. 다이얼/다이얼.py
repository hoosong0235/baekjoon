alphabet = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]

first = input()
time = 0

for i in first:
    for j in alphabet:
        if i in j:
            time += alphabet.index(j) + 3
         
print(time)