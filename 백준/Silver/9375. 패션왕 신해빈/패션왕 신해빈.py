import math
import sys

for _ in range(int(input())):
    map = dict()
    for _ in range(int(input())):
        name, type = sys.stdin.readline().split()
        if type in map:
            map[type] += 1
        else:
            map[type] = 1

    ans = 1
    for type in map:
        ans *= map[type] + 1
    ans -= 1

    print(ans)
