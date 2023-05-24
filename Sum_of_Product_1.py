for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split())) [:n]
    res=0
    ce=0
    for i in range(n):
        if arr[i]==1:
            ce+=1
        else:
            res+=ce*(ce+1)//2
            ce=0
    res+=ce*(ce+1)//2
    print(res)