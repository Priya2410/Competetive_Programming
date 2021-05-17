
#include <stdio.h> 

int main() {
	// Read the input n, k
	int n, k;
	int j=0;
	int input;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&input);
	    if(input%k==0)
	    j++;
	}
	printf("%d",j);
}

