vector<int> solve(vector<int>& a, vector<int>& b) {
    int p=a.size();
    int q=b.size();
    int i=0,j=0;
    int k=0;
    vector<int>r;
    while(i<p && j<q){
        if(a[i]<b[j])
        {
            r.push_back(a[i]);
            i++;
        }
        else
        {
            r.push_back(b[j]);
            j++;
        }
        k++;
    }
    if(i==p){
        for(int i=j;i<q;i++){
            r.push_back(b[i]);
            k++;
        }
    }
    if(j==q){
        for(int j=i;j<p;j++){
            r.push_back(a[j]);
            k++;
        }
    }
    return r;
}