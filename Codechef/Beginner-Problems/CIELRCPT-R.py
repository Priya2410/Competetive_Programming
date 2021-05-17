# cook your dish here
import math
test=int(input())
for i in range(0,test):
    n=int(input())
    count= 0
    i=11;
    while i>=0:
        count=count+int(n/pow(2,i))
        n=n%pow(2,i);
        i-=1;
    print(count)
        
            
        
