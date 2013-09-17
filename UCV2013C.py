def fn(n):
    return ((n-1)*(n-2)/2)+1
while 1:
    a=list(int(i) for i in raw_input().split())
    if a[0]==0 and a[1]==0 and a[2]==0 and a[3]==0:break
    fences=fn(a[1]+2)
    spent=a[2]*fences
    if a[0]-spent>=a[3]:
        print "Farmer Cream will have %d Bsf to spend."%(a[0]-spent)
    else:
        ans=a[0]-spent
        ans=a[3]-ans
        if ans<0:ans*=-1
        print "The firm is trying to bankrupt Farmer Cream by %d Bsf."%(ans)
