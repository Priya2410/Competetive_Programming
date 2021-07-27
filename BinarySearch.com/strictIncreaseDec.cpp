// https://binarysearch.com/problems/Strictly-Increasing-or-Strictly-Decreasing
bool solve(vector<int>& nums) {
    if(nums.size()==1)
        return true;
    if(nums[1]>nums[0]){
        for(int i=2;i<nums.size();i++){
        if(nums[i]<nums[i-1] || nums[i]==nums[i-1])
        return false;
    }
    }
    else if(nums[1]<nums[0]){
        for(int i=2;i<nums.size();i++){
        if(nums[i]>nums[i-1]||nums[i]==nums[i-1])
        return false;
    }
    }
    else
    return false;
    return true;
}
