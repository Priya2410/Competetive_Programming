# cook your dish here
test=int(input())
for i in range(0,test):
    n=input();
    length=len(n);
    num=int(n);
    sum=num%10+int(num/pow(10,length-1));
    print(sum);
