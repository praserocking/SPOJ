while 1:
    a=list(int(i) for i in raw_input().split())
    if a[0]==0 and a[1]==0:break
    else:
        ans=(a[0]*(a[0]**a[1]-1))/(a[0]-1)
        ans%=1000000007
        print ans

