#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	if(a==b)
	{
	    printf("%d",1);
	    return 0;
	}
	int res=a-b;
    int n1=res/10;
    int n2=res%10;
    if(n2>1)
    n2=n2-1;
    else
    n2=n2+1;
    n1=n1*10+n2;
    printf("%d",n1);
	return 0;
}

/* An input contains 2 integers A and B.

Output
Print a wrong answer of A-B. Your answer must be a positive integer containing the same number of digits as the correct answer,
and exactly one digit must differ from the correct answer. 
Leading zeros are not allowed. If there are multiple answers satisfying the above conditions, anyone will do*/
