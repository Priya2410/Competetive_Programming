// https://binarysearch.com/problems/Sum-of-the-Digits

int solve(int num) {
    int sum=0,rem;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;
}
