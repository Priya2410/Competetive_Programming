#include <stdio.h>

int main(void) {
	// your code goes here
	int test,n,p;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d %d",&n,&p);
	    if(n==p)
	    printf("=\n");
	    else if(n>p)
	    printf(">\n");
	    else
	    printf("<\n");
	}
	    return 0;
}

