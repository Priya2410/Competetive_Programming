#include <stdio.h>

int reverse(int n){
    int rem=0;
    int num=0;
    while(n>0)
    {
        rem=n%10;
        num=num*10+rem;
        n=n/10;
    }
    return num;
}

int main(void) {
	// your code goes here
	int test;
	scanf("%d",&test);
	int n;
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&n);
	    printf("%d\n",reverse(n));
	}
	return 0;
}



