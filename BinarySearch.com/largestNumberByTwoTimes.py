# // https://binarysearch.com/problems/Largest-Number-By-Two-Times
class Solution:
    def solve(self, nums):
       nums=list(nums);
       if(len(nums)==1):
           return False;
       max1=max(nums);
       nums.remove(max1)
       max2=max(nums);
       if(max1>2*max2):
           return True
       else:
           return False

