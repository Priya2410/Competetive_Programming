// https://binarysearch.com/problems/Square-of-a-List

vector<int> solve(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        nums[i]=nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    return nums;
}
