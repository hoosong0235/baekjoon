import itertools

n, m = map(int, input().split())
arr = tuple(map(int, input().split()))

print(max(filter(lambda sum: sum <= m, map(sum, filter(
    lambda tup: tup[0] != tup[1] and tup[1] != tup[2] and tup[2] != tup[0], itertools.product(arr, arr, arr))))))
