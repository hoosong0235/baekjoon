def factorial(n):
	if n == 0:
		return 1
	return n * factorial(n - 1)


N = int(input())
F = str(factorial(N))
L = len(F)
answer = 0

for i in range(L-1, -1, -1):
	if F[i] == '0':
		answer += 1
	else:
		break
	
print(answer)