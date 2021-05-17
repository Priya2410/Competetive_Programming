#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long long int a,b,g,l;
	    cin>>a>>b;
	    g=gcd(a,b);
	    l=a*b/g;
	    cout<<g<<" "<<l<<endl;
	    
	}
	return 0;
}


