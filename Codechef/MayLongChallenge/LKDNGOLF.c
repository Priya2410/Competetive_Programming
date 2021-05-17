#include<stdio.h>

int golf(int n,int x,int k)
{
    int i=0;
    if(n==k)
    return 1;
    while(i<=n+1){
        if(i==x)
        {
            return 1;
        }
        i+=k;
    }
    int j=n+1;
    while(j>=0)
    {
        if(j==x)
        {
            return 1;
        }
        j=j-k;
    }
    return 0;
}
int main(void){
    int test;
    int n,x,k;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%d %d %d",&n,&x,&k);
        if(golf(n,x,k))
        printf("YES\n");
        else
        printf("NO\n");
    }
}
