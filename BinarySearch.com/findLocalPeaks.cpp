// https://binarysearch.com/problems/Find-Local-Peaks

vector<int> solve(vector<int>& nums) {
    vector<int> v;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
        v.push_back(i);
    }
    if(nums[nums.size()-1]>nums[nums.size()-2] && nums.size()>1)
    v.push_back(nums.size()-1);
    return v;
}
