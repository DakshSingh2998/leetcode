#https://leetcode.com/problems/valid-anagram/submissions/ make 2 hashmaps
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dicts={}
        dictt={}
        for i in s:
            if(i in dicts.keys()):
                dicts[i]=dicts[i]+1
                pass
            else:
                dicts[i]=1
                pass
            pass
        for i in t:
            if(i in dictt.keys()):
                dictt[i]=dictt[i]+1
                pass
            else:
                dictt[i]=1
                pass
            pass
        if(dicts==dictt):
            return True
        return False
