def solution(a,g,n):
    if a%g==0:
        return -1
    c=n
    if c%a!=0:
        c=n+a-(c%a)
    while not(c%a==0 and c%g!=0):
        c+=a
    return c
for _ in range(int(input())):
    a,g,n=map(int,input().split())
    print(solution(a,g,n))