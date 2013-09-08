def gcd(a,b):
    if b==0:return a
    else:return gcd(b,a%b)
for _ in input()*[0]:
    t=raw_input()
    if t.rfind('.')==-1:print 1
    else:
        a=t.split('.',2)
        print 10**len(a[1])/gcd(int(a[0]+a[1]),10**len(a[1]))
