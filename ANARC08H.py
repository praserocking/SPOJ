def josephus(n,k):
   r,i=0,2
   while i<=n:
     r=(r+k)%i;
     i+=1
   return r+1
while 1:
    a=list(int(i) for i in raw_input().split(' ',2))
    if a[0]!=0 and a[1]!=0:
        print `a[0]`+" "+`a[1]`+" "+`josephus(a[0],a[1])`
    else:break
