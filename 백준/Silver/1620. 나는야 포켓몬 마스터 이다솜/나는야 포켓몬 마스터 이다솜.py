import sys

n, m = map(int, input().split())
nametonum, numtoname = {}, {}

for i in range(n):
    name = sys.stdin.readline().rstrip()
    nametonum[name] = i
    numtoname[i] = name

for _ in range(m):
    ipt = sys.stdin.readline().rstrip()
    if ipt.isnumeric():
        print(numtoname[int(ipt) - 1])
    else:
        print(nametonum[ipt] + 1)
