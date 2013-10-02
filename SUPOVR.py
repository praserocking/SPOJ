b,b1,b2,cnt=[0,0,0],0,1,0
for i in raw_input().split():
    if i=='O':
        b1=2
        continue
    if i=='W' or i=='N':continue
    else:
        b[b1]+=int(i)
        if int(i)%2!=0:
            b1,b2=b2,b1
for i in b:print i 
