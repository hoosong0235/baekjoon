string = input()
arr = set()

for i in range(len(string)):
    for j in range(len(string) - i):
        arr.add(string[j:j + i + 1])

print(len(arr))
