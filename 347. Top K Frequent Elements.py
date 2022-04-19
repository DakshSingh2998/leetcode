#https://leetcode.com/problems/top-k-frequent-elements/
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
        sorted_d = dict( sorted(dic.items(), key=operator.itemgetter(1),reverse=True))
        ans=[]
        j=0
        for i in sorted_d.keys():
            ans.append(i)
            j=j+1
            if(j==k):
                break
            pass
        return ans
