#include <stdio.h>

int fact(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main(void) {
	// your code goes here
	int test;
	int n;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&n);
	    printf("%d\n",fact(n));
	}
	return 0;
}

