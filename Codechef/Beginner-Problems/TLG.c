#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,y;
	int winner;
	int lead=0;
	int num1=0;
	int num2=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   scanf("%d %d",&x,&y);
	   num1+=x;
	   num2+=y;
	   if(num1>num2)
	   {
	       if((num1-num2)>lead)
	       {
	           lead=num1-num2;
	           winner=1;
	       }
	   }
	   else
	   {
	       if((num2-num1)>lead)
	       {
	           lead=num2-num1;
	           winner=2;
	       }
	   }
	}
	printf("%d %d",winner,lead);
	return 0;
}

