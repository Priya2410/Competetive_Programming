// https://binarysearch.com/problems/List-Min-Replacement
vector<int> solve(vector<int>& nums) {
    int small=nums[0];
    vector<int> v;
    v.push_back(0);
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]<small)
            small=nums[i-1];
        v.push_back(small);
    }
    return v;
}
