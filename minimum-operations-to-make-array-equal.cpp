class Solution:
    def minOperations(self, n: int) -> int:
        r =  n%2
        if (r):
            m = (n-1)/2
            return int((2*m)+(m-1)*m)
        else:
            sw = int(n//2)*((1+(2*(n//2)+1)//2)-1)
            return sw


https://leetcode.com/problems/minimum-operations-to-make-array-equal/submissions/