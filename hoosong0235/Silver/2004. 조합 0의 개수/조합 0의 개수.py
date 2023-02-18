def two(N):
    answer = 0
    var = 2
    while var <= N:
        answer += N // var
        var *= 2
    return answer


def five(N):
    answer = 0
    var = 5
    while var <= N:
        answer += N // var
        var *= 5
    return answer


n, m = map(int, input().split())
twos = two(n) - two(n - m) - two(m)
fives = five(n) - five(n - m) - five(m)
print(min(twos, fives))