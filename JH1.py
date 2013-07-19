f=input
for x in f()*[0]:
 c,p,q,n=0,0,0,f()
 n=raw_input().split(' ',n)
 for t in n:
  t=long(t)
  if c>0:c,p=0,p+t*(t>0)
  else:c,q=1,q+t*-1*(t<0)
 if p<q:print'Every Girl Lies!'
 else:print'Some Mirrors Lie!'
