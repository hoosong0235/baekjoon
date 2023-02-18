def star(i, n):
    if (n==1):
        return "*"
    if (n//3 <= i and i < (n//3)*2):
        return star(i%(n//3), n//3)+" "*len(star(i%(n//3), n//3))+star(i%(n//3), n//3)
    return star(i%(n//3), n//3)*3

num = int(input())
for j in range(num):
    print(star(j, num))