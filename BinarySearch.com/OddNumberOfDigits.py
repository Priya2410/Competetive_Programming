# https://binarysearch.com/problems/Odd-Number-of-Digits

class Solution:
    def solve(self, nums):
        count=0
        for i in nums:
            if (len(str(i))&1):
                count+=1
        return count
