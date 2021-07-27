# // https://binarysearch.com/problems/High-Frequency

class Solution:
    def solve(self, nums):
        d=dict()
        maxval=0
        for i in set(nums):
            d[i]=0
        for j in range(0,len(nums)):
            d[nums[j]]=d[nums[j]]+1
            if(d[nums[j]]>maxval):
                maxval=d[nums[j]]
        return maxval;
            

        
