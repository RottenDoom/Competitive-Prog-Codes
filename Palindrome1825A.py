def pallL(s):
    check = False
    if s == s[0] * (len(s)):
        check = True
    else:
        check = False
    if check:
        return -1
    else:
        return len(s) - 1

t = int(input())
for i in range(t):
    n = input()
    print(pallL(n))