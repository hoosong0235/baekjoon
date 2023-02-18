k = int(input())
vs = [list(map(int, input().split())) for _ in range(6)]
largelati, largelong = 0, 0
largelatiindex, largelongindex = 6, 6
for v in vs:
    if (v[0] in [1, 2] and v[1] > largelati):
        largelati = v[1]
        largelatiindex = vs.index(v)
    elif (v[0] in [3, 4] and v[1] > largelong):
        largelong = v[1]
        largelongindex = vs.index(v)
smalllati = abs(vs[(largelongindex - 1) % 6][1] -
                vs[(largelongindex + 1) % 6][1])
smalllong = abs(vs[(largelatiindex - 1) % 6][1] -
                vs[(largelatiindex + 1) % 6][1])
print(k * (largelati * largelong - smalllati * smalllong))
