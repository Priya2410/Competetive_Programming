#include<stdio.h>
int palin(int n)
{
    int num=n;
    int rem;
    int sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(num==sum)
    return 1;
    else
    return 0;
}
int main(void)
{
    int test,n;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%d",&n);
        if(palin(n))
        printf("wins\n");
        else
        printf("loses\n");
    }
}
