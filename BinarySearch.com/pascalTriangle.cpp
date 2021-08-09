// https://binarysearch.com/problems/Pascal's-Triangle


vector<int> solve(int n) {
    vector<int> v;
    int c=1;
    int line=n+1;
    for (int i = 1; i <= n+1; i++)
    {
        v.push_back(c);
        c= c* (line - i) / i;
    }
    return v;
}
