#include <stdio.h>

int occur(int n){
    int count=0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        if(rem==4)
        {
            count++;
        }
        n=n/10;
    }
    return count;
}

int main(void) {
	// your code goes here
	int test;
	scanf("%d",&test);
	int n;
	for(int i=0;i<test;i++)
	{
	    scanf("%d",&n);
	    printf("%d\n",occur(n));
	}
	return 0;
}


