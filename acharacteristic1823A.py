def achar(n,k):
    l = [1 for i in range(n)]
    check = False
    if (k == (n - 1) * n / 2):
        print('YES')
        return ' '.join(l)
    else:
        for j in range(n - j -1,n - 1):
            l[j] = -1
            if checker(l) == k:
                check = True
                break
    if check:
        print('YES')
        return ' '.join(l)
    else:
        return 'NO'


def checker(l):
    j = 0
    count = 0
    while j < len(l):
        for i in range(j + 1,len(l)):
            if l[j] * l[i] == 1:
                count += 1
        j += 1
    return count

t = int(input())
for i in range(t):
    L = list(map(int, input().split()))
    n = L[0]
    k = L[1]
    print(achar(n,k))
