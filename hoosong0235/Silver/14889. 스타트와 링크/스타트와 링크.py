import itertools


N = int(input())

board = list()
for i in range(N):
    board.append(list(map(int, input().split())))

M = N//2
people = list(range(N))
combinations = list(itertools.combinations(people, M))

diff_list = list()
for i in range(len(combinations) // 2):
    start_combination = combinations[i]
    link_combination = combinations[-1 * (i + 1)]

    start_score = 0
    start_permutations = itertools.permutations(start_combination, 2)
    for permutation in start_permutations:
        start_score += board[permutation[0]][permutation[1]]
    link_score = 0
    link_permutations = itertools.permutations(link_combination, 2)
    for permutation in link_permutations:
        link_score += board[permutation[0]][permutation[1]]

    diff_list.append(abs(start_score - link_score))

print(min(diff_list))
