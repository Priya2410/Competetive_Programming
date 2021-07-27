// https://binarysearch.com/problems/Insertion-Index-in-Sorted-List
int solve(vector<int>& nums, int target) {
    int pos=0;
    int l=0;
    int r=nums.size()-1;
    int m;
    while(l<=r){
        m=(l+r)/2;
        if(nums[m]==target)
        {
            l=m+1;
        }
        if(target<nums[m])
        {
            r=m-1;
        }
        if(target>nums[m])
        {
            l=m+1;
        }
    }
    return l;
}
