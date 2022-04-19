#https://leetcode.com/problems/top-k-frequent-elements/ use bucket sort and take and array of with index as count and element as array
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic={}
        for i in nums:
            if i in dic.keys():
                dic[i]=dic[i]+1
                pass
            else:
                dic[i]=1
            pass
        #print(dic)
        dic2={}
        for i in range(0,len(nums)+1):
            dic2[i]=[]
            pass
        for i in dic.keys():
            dic2[dic[i]].append(i)
        ans=[]
        j=0
        for i in range(len(nums), -1, -1):
            for j in dic2[i]:
                ans.append(j)
                k=k-1
                if(k==0):
                    return ans
                pass
            pass
        return ans
