#include<stdio.h>
long fastPower(long a,long b,long n)
{
    long res=1; //to store power
    while(b>0)
    {
        //Check if b is odd 
        //modulo operation is expensive use & instead
        // if b is odd then exmaple 3^3=3*3^4;
        // if b is even then 3^4=(3^2)^2;
        if((b&1)!=0)
        {
            res=((res%n)*(a%n))%n;;
            //Since I want answer to be res=res%n;
            //Using property if res=res*a
            // then res%n=((res%n)*(a%n))%n;
        }
        a=((a%n)*(a%n))%n;
        b=b>>1; // better than b=b/2
    }
    return res;
    
}
int main(void)
{
    int test,n,count;
    long val=1000000007;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%d",&n);
        count=fastPower(2,n-1,val);
        printf("%ld\n",count);
    }
}
