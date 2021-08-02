// https://binarysearch.com/problems/Check-Power-of-Two

bool solve(int n) {
    int rem,sum=0;
    if(n==0)
    return false;
    while(n>0){
        rem=n%2;
        sum=sum+rem;
        if(sum>1)
        return false;
        n=n/2;
    }
    return true;
}
