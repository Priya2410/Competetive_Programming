#include <stdio.h>
int prime(int n)
{
    int count=0;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    for(int i=2;i*i<=n;i++)
    {
        if((n%i)==0)
        return 0;
    }
    return 1;
}
int main(void) {
	// your code goes here
	int test;
	scanf("%d",&test);
	int n;
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&n);
	    if(prime(n))
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("no\n");
	    }
	}
	return 0;
}

