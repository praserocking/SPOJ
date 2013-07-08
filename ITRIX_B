def lucky (n):
    nums = ['2','3','5','7']
    if n <= 4:
        return nums[n-1]
    else:
        if (n%4) == 0:
            t = 3
            return lucky(n/4-1) + nums[t]
        else:
            t= n%4-1
            return lucky(n/4)+nums[t]
            
for i in input()*[0]:
    print lucky(input())
