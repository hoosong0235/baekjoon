repeat = int(input())
ks = []
ns = []

for i in range(repeat):
    ks.append(int(input()))
    ns.append(int(input()))

kmax = max(ks)
nmax = max(ns)

floor_0 = []
building = []

for i in range(nmax):
    floor_0.append(i+1)

building.append(floor_0)

for i in range(kmax):
    building.append([1]+([0]*(nmax-1)))
    
for i in range(1, kmax+1):
    for j in range(1, nmax):
        building[i][j] = building[i-1][j] + building[i][j-1]
    
for i in range(repeat):
    k = ks[i]
    n = ns[i]
    print(building[k][n-1])
    