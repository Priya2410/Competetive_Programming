# https://binarysearch.com/problems/3-6-9
class Solution:
    def solve(self, n):
        l=list()
        for i in range(1,n+1):
            if(i%3==0) or "3" in str(i) or "6" in str(i) or "9" in str(i):
                l.append("clap")
            else:
                l.append(str(i))
        return l;

        
