import sys

n, m = map(int, input().split())

arr = set([sys.stdin.readline().rstrip() for _ in range(n)])
print(sum(map(lambda x: 1, filter(lambda x: x in arr,
      [sys.stdin.readline().rstrip() for _ in range(m)]))))
