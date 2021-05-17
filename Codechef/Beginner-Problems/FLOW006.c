#include <stdio.h>

int main(void) {
	// your code goes here
	int test;
	int num;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&num);
	    int sum=sumofintegers(num);
	    printf("%d\n",sum);
	}
	return 0;
}

int sumofintegers(int n)
{
    int rem;
    int sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}

