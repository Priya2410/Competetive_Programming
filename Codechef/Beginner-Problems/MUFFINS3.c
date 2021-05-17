#include <stdio.h>
#include<math.h>

int main(void) {
	int test;
	scanf("%d",&test);
	int n;
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&n);
        int val=floor(n/2)+1;
	    printf("%d\n",val);
	}
	return 0;
}

