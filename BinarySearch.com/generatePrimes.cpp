// https://binarysearch.com/problems/Generate-Primes

vector<int> solve(int n) {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> v;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            v.push_back(i);
        }
    }
    return v;
}
