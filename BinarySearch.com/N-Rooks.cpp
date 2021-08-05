// https://binarysearch.com/problems/N-Rooks

int solve(int n) {
    if(n==0||n==1)
    return 1;
    else
    return n*solve(n-1);
}
