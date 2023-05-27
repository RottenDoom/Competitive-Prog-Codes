def Divarray(n):
    l = [str((i + 1) * n) for i in range(n)]
    return ' '.join(l)
t = int(input())
for i in range(t):
    n = int(input())
    print(Divarray(n))