import sys
t,f,s=0,0,[]
for _ in sys.stdin:
 if f==0:t=int(_);f=1;continue
 s.append(_.split())
for j in s[::-1]:
 for i in j[::-1]:print(i[::-1]+' ')*t,
