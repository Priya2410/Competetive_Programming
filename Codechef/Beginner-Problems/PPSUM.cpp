#include <iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return n+sum(n-1);
}
int main() {
	// your code goes here
	int test,res=0;
	scanf("%d",&test);
	int d,n;
	while(test--){
	    scanf("%d %d",&d,&n);
	    if(d==1)
	    cout<<sum(n)<<endl;
	    
	    else
	    {
	    for(int i=0;i<d;i++)
	    {
	        n=sum(n);
	    }
	    cout<<n<<endl;
	    }
	   
	}
	return 0;
}
