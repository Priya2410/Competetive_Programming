#include<stdio.h>
int main(void)
{
    int test;
    int x,a,b;
    int val;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%d %d %d",&x,&a,&b);
        val=a+(100-x)*b;
        printf("%d\n",val*10);
    }
}
