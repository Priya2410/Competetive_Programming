#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	int max=1;
	scanf("%d",&n);
	for(int i=2;i<=10;i++)
	{
	    if(n%i==0)
	    {
	        if(i>max)
	        max=i;
	    }
	}
	printf("%d",max);
	return 0;
}
