// https://binarysearch.com/problems/Perfect-Squares
// Leetcode - Two sum problem 
int solve(int n) {
    //Check if the number is a perfect square or not 
    if(ceil(sqrt(n))==floor(sqrt(n)))
    return 1;
    //Check if the number is of the form 4^a(8b+7)
    while(n%4==0)
    n/=4;
    if(n%8==7)
    return 4; //because second condition
    //Identify breakpoint

    for(int i=1;i*i<=n;i++)
    {
        int val=sqrt(n-i*i);
        if(val*val==(n-i*i))
        return 2; //single breakpoint divides into two halves;
    }

    return 3;

}
