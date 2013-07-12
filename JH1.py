import math
u,f=math.fabs,input
for x in f()*[0]:
 m=f();p,q,r,d=0,0,0,0;i=raw_input().split(' ',m)
 for n in i:
  e=long(n);d+=1
  if d&1 and e>0:p+=e
  elif e<0:q+=e
 if u(p)>=u(q):print'Some Mirrors Lie!'
 else:print'Every Girl Lies!'

