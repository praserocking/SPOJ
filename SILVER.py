while 1:
    t=input()
    if t==0:break
    else:
        i=0
        while 2**i<t:
            t-=2**i
            i+=1
        print i  

