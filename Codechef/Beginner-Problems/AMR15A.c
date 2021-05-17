#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int a[n];
	int count_even=0;
	int count_odd=0;
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	    if(a[i]%2==0){
	        count_even++;
	    }
	    else
	    {
	        count_odd++;
	    }
	}
	if(count_odd>=count_even)
	printf("NOT READY");
	else
	printf("READY FOR BATTLE");
	return 0;
}

