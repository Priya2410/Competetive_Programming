#include <stdio.h>
int max(int a,int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
int main(void) {
	// your code goes here
	int test;
	scanf("%d",&test);
	int a,b;
	for(int i=0;i<test;i++)
	{
	    scanf("%d %d",&a,&b);
	    printf("%d %d\n",max(a,b),a+b);
	}
	return 0;
}

