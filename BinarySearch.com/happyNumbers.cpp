// https://binarysearch.com/problems/Happy-Numbers
bool solve(int n) {
    while(n!=1){
        int num=0;
        while(n>0){
            num=num+(n%10)*(n%10);
            n=n/10;
        }

        if(num==4)
        return false;

        n=num;
    }
    return true;
}
