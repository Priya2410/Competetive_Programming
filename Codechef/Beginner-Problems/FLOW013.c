#include <stdio.h>

int main(void) {
	// your code goes here
	int test;
	scanf("%d",&test);
	int a,b,c;
	for(int i=0;i<test;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    if((a+b+c)== 180)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

