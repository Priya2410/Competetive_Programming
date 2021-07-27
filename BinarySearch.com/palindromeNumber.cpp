// https://binarysearch.com/problems/Palindromic-Integer
bool solve(int num) {
    int sum=0;
    int rem;
    int p=num;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==p)
    return true;
    return false;
}
