for _ in input()*[0]:
    t=raw_input().split()
    t=set(list(i[::-1] for i in t))
    print len(t)
