n = int(input())
arr = [tuple(map(int, input().split())) for i in range(n)]

for i in range(len(arr)):
    cnt = 1
    for j in range(len(arr)):
        if i != j and arr[i][0] < arr[j][0] and arr[i][1] < arr[j][1]:
            cnt += 1
    print(cnt, end=' ')
