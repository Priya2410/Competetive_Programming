#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int test;
	scanf("%d",&test);
	int a,b;
	for(int i=0;i<test;i++)
	{
	    scanf("%d %d",&a,&b);
	    printf("%d\n",a+b);
	}
}
