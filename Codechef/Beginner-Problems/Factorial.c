#include <stdio.h>
#include<math.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
	        int n;
	    	  scanf("%d",&n);
	        int res=0;
	        for(int i=1;i<n;i++)
	          {
	            int num=(n/pow(5,i));
	            if(num>=1)
	            res=res+num;
	            else 
	            break;
	          }
	          printf("%d\n",res);
	          }
	return 0;
}
//FIND THE NUMBER OF TRAILING ZEROES AT THE END OF N!
//HERE THERE ARE 't' INPUTS
