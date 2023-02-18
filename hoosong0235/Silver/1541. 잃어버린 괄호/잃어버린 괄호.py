equation = input()
answer = 0
e_splitbyminus = equation.split('-')

for i in range(len(e_splitbyminus)):
    e_splitbyminus[i] = sum(map(int, e_splitbyminus[i].split('+')))
    if i == 0:
        answer += e_splitbyminus[i]
    else:
        answer -= e_splitbyminus[i]

print(answer)