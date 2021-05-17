# cook your dish here
n=int(input())
d=list();
num1=0;
num2=0;
f=tuple();
for i in range(0,n):
    x,y=map(int,input().split())
    num1+=x;
    num2+=y;
    if(num1>num2):
        f=(num1-num2,1);
        d.append(f);
    else:
        f=(num2-num1,2);
        d.append(f);
d=sorted(d,reverse=True)
print(d[0][1],d[0][0]);
