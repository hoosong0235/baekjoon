word = input()
count = len(word)

for i in range(len(word)):
    if (i != 0 and word[i] == "j"):
        if (word[i-1] in ["l", "n"]):
            count -= 1
    if (i != 0 and word[i] == "-"):
        if (word[i-1] in ["c", "d"]):
            count -= 1
    if (i != 0 and word[i] == "="):
        if (word[i-1] in ["c", "s", "z"]):
            count -= 1
        if (i != 1 and word[i-1] == "z" and word[i-2] == "d"):
            count -= 1

print(count)