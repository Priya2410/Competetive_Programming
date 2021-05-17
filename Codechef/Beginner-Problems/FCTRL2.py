# cook your dish here
test=int(input())
def fact(n):
    if n==1:
        return 1;
    else:
        return n*fact(n-1);
for i in range(0,test):
    n=int(input());
    print(fact(n));
    
