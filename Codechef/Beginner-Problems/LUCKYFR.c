#include <stdio.h>
int count(int n)
{
    int count=0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        if(rem==4){
            count=count+1;
        }
        n=n/10;
    }
    return count;
}
int main(void) {
	// your code goes here
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

