def BBlanckspace(L):
    l = []
    s = 0
    for i in L:
        if i == 0:
            s += 1
        elif i == 1:
            l.append(s)
            s = 0
    if len(l) == 0:
        return 0
    else:
        return max(l)

t = int(input())
for i in range(t):
    n = int(input())
    L = list(map(int, input().split()))
    print(BBlanckspace(L))