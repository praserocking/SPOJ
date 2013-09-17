def gcd(a,b):
    if b==0:return a
    else:return gcd(b,a%b)
for _ in input()*[0]:
    a=list(int(i) for i in raw_input().split())
    b=gcd(a[0],a[1])
    print `(a[1]/b)`+" "+`(a[0]/b)`
