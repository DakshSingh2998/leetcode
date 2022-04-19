//https://leetcode.com/problems/permutation-in-string/
class Solution {
public:
    
    
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        
        int i=0;
        int j=0;
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for(i=97;i<=122;i++){
            map1[(char)i]=0;
            map2[(char)i]=0;
        }
        for(i=0;i<s1.size();i++){
            map1[s1[i]]++;
        }
        for(i=0;i<s1.size();i++){
            map2[s2[i]]++;
        }
        if(map1==map2){
            return true;
        }
        for(;i<s2.size();i++){
            /*
            cout<<i<<" "<<j<<endl;
            for (auto x : map1)
                cout << x.second << " ";
            cout<<endl;
            for (auto x : map2)
                cout << x.second << " ";
            cout<<endl;
            */
            map2[s2[i]]++;
            map2[s2[j]]--;
            j++;
            if(map1==map2){
                return true;
            }
        }
        
        
        return false;
    }
};
