import sys

n, m = map(int, input().split())
a = set([sys.stdin.readline().rstrip() for _ in range(n)])
b = set([sys.stdin.readline().rstrip() for _ in range(m)])
c = sorted(a.intersection(b))

print(len(c))
for element in c:
    print(element)
