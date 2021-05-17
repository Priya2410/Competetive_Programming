#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	scanf("%d",&test);
	long int q,val;
	while(test--){
	    scanf("%ld %ld",&q,&val);
	    double f=(q*val);
	    if(q<=1000)
	    {
	    printf("%f\n",f);
	    }
	    else
	    {
	        f=f-(0.1)*f;
	        printf("%f\n",f);
	    }
	}
	return 0;
}
