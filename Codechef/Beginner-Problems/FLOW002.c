#include <stdio.h> 

int main(void) {
	// your code goes here
	int test;
	int num,num2;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    scanf("%d %d",&num,&num2);
	    printf("%d\n",num%num2);
	}
	return 0;
}
