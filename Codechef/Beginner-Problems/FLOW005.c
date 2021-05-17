#include <stdio.h>
int count(int n)
{
    int a[6]={1,2,5,10,50,100};
    int count=0;
    for(int i=5;i>=0;i--)
    {
        if(n>=a[i]){
            count=count+(n/a[i]);
            n=n-((n/a[i])*a[i]);
        }
    }
    return count;
}
int main(void) {
	int test;
	int n;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&n);
	   printf("%d\n",count(n));
	}
	return 0;
}

