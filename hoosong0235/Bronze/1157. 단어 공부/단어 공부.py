lower = "abcdefghijklmnopqrstuvwxyz"
upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
count = []
for i in range(26):
    count.append(0)

word = input()

for i in word:
    for j in range(26):
        if (i == lower[j] or i == upper[j]):
            count[j] += 1

max_count = max(count)
max_upper = upper[count.index(max_count)]
count.remove(max_count)
if (max_count == max(count)):
    print("?")
else:
    print(max_upper)
