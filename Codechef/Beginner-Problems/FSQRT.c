#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int test;
	int n;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    	scanf("%d",&n);
	    	int f=floor(sqrt(n));
	    	printf("%d\n",f);
	}
	return 0;
}

