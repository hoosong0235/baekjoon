N = int(input())

for i in range(N):
	M = int(input())
	DP = dict()
	for j in range(M):
		name, category = map(str, input().split())
		if category in DP:
			DP[category] += 1
		else:
			DP[category] = 1
	answer = 1
	for k in DP.values():
		answer *= (k + 1)
	answer -= 1
	print(answer)