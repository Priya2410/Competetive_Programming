#include <stdio.h>

int main(void) {
	// your code goes here
	int test,n;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d",&n);
	    if(n<10)
	    printf("Thanks for helping Chef!\n");
	    else
	    printf("%d\n",-1);
	}
	return 0;
}

