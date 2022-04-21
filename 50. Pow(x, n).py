#https://leetcode.com/problems/powx-n/
class Solution:
    
    def fun(self, x : float, n: int) -> float:
        if(n==1):
            return x
        if(n%2==0):
            ans=self.fun(x, n/2)
            return ans*ans
        ans=self.fun(x, n//2)
        return ans*ans*x
    
    def myPow(self, x: float, n: int) -> float:
        if(n==0):
            return 1
        if(n>0):
            return self.fun(x, n)
        return 1/self.fun(x, n*-1)
