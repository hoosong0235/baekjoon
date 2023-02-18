N = int(input())

for i in range(N):
	n, m = map(int, input().split())
	ms = 1
	ns = 1
	for j in range(n, 0, -1):
		ms *= m
		ns *= j
		m -= 1
	print(ms // ns)