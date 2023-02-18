def can_attack(m, n):
    if c_list[n] or r_list[(m-n)+(N-1)] or l_list[(m+n)]:
        return True

    return False


def put_queen_at_kth_row(k):
    global count

    if k == N:
        count += 1
        return

    for l in range(N):
        if not can_attack(k, l):
            c_list[l] = True
            r_list[(k-l)+(N-1)] = True
            l_list[(k+l)] = True
            put_queen_at_kth_row(k+1)
            c_list[l] = False
            r_list[(k-l)+(N-1)] = False
            l_list[(k+l)] = False
    return


N = int(input())
count = 0

c_list = [False] * N
r_list = [False] * (2 * N - 1)
l_list = [False] * (2 * N - 1)

put_queen_at_kth_row(0)

print(count)