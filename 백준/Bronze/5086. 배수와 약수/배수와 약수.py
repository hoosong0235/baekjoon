import sys

for line in sys.stdin:
    a, b = map(int, line.split())
    if not (a or b):
        break
    if b % a == 0:
        print('factor')
    elif a % b == 0:
        print('multiple')
    else:
        print('neither')
