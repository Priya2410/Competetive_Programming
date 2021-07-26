// https://binarysearch.com/problems/Sum-of-Two-Numbers
class Solution:
    def solve(self, nums, k):
        l=dict()
        for i in nums:
            comp=k-i; 
            if comp in l:
                return True;
            else:
                l[i]=comp;
        return False;

            