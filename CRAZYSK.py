for _ in input()*[0]:
    a=list(long(i) for i in raw_input().split())
    n,m,cnt,tmp=a[0],a[1],a[0],0
    while (n/m)!=0:
        cnt+=(n/m)
        tmp=(n%m)
        n/=m
        n+=tmp
    print cnt
