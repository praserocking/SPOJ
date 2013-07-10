for x in input()*[0]:
    a=raw_input().split(' ',3)
    a,b,c=long(a[0]),long(a[1]),long(a[2])
    a=b-a
    c=b-c
    print a+c

