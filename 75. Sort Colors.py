#https://leetcode.com/problems/sort-colors/
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if(len(nums)==1):
            return nums
        z=0
        o=0
        t=0
        for i in nums:
            if(i==0):
                z=z+1
            elif(i==1):
                o=o+1
            else:
                t=t+1
                pass
            pass
        ans=[]
        pos=0
        while(z>0):
            nums[pos]=0
            pos=pos+1
            z=z-1
            pass
        while(o>0):
            nums[pos]=1
            pos=pos+1
            o=o-1
            pass
        while(t>0):
            nums[pos]=2
            pos=pos+1
            t=t-1
            pass
