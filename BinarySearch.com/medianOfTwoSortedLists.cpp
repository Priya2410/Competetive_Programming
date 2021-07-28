// https://binarysearch.com/problems/Median-of-Two-Sorted-Lists

int solve(vector<int>& nums0, vector<int>& nums1) {
    int p=nums0.size();
    int q=nums1.size();
    int i=0,j=0;
    vector<int> v;
    while(i<p && j<q){
        if(nums0[i]<nums1[j]){
            v.push_back(nums0[i]);
            i++;
        }else{
            v.push_back(nums1[j]);
            j++;
        }
    }

    if(i==p){
        for(int i=j;i<q;i++){
            v.push_back(nums1[i]);
        }
    }
    if(j==q){
        for(int j=i;j<p;j++){
            v.push_back(nums0[j]);
        }
    }

    int m=v.size();
    int n=ceil(m/2);

    return v[n];
}
