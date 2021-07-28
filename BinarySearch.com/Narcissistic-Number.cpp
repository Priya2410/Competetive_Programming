// https://binarysearch.com/problems/Narcissistic-Number
bool solve(int n) {
    int rem,sum=0,c=0;
    int num=n;
    int num1=n;
    while(n>0){
        c=c+1;
        n=n/10;
    }
    while(num>0){
        rem=num%10;
        sum=sum+pow(rem,c);
        num=num/10;
    }
    if(sum==num1)
    return true;
    return false;
}
