# cook your dish here
import math
test=int(input())
for i in range(0,test):
    n=int(input())
    weights=[int(x) for x in input().split()]
    location=[int(x) for x in input().split()]
    d1=dict();
    for i in range(1,n+1):
        d1[i]=weights.index(i)
    jump=0
    for i in range(2,n+1):
        l1=d1[i];
        l2=d1[i-1];
        l3=0;
        if(l2>=l1):
            l3=math.ceil(((l2-l1+1)/location[l1]));
        jump+=l3;
        d1[i]=d1[i]+l3*location[l1];
    
    print(jump)
