// https://binarysearch.com/problems/Sorted-Elements

int solve(vector<int>& nums) {
    vector<int> n=nums;

    std::sort(nums.begin(), nums.end());

    int count=0;

    for(int i=0;i<n.size();i++){
        if(nums[i]==n[i])
        count++;
    }

    return count;
}
