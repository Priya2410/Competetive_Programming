#include <stdio.h>

int main(void) {
	// your code goes here
	int test;
	int n;
	int sum,rem;
	int num;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&n);
	    num=n;
	    rem=0;
	    while(n>0)
	    {
	        rem=n%10;
	        n=n/10;
	    }
	    sum=num%10+rem;
	    printf("%d\n",sum);
	}
	return 0;
}

