n=int(input())
while n>0:
    size=int(input())
    l=list(map(int,input().split()))
    if size%2==0:
        si=len(l)//2
        a=sum(l[:si])
        b=sum(l[si:])
        print(a*b)
    else:
        si=len(l)//2
        a=sum(l[:si])
        b=sum(l[si:])
        print(a*b)
    n-=1
