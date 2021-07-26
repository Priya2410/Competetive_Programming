// https://binarysearch.com/problems/Rotation-of-Another-String
class Solution:
    def solve(self, s0, s1):
        if(len(s0)!=len(s1)):
            return False;
        else:
            s1=s1+s1;
            if s0 in s1:
                return True;
            else:
                return False;
        