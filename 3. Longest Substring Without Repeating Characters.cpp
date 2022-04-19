class Solution {
public:
    struct Node{
        int ind=-1;
        int count=0;
    };
    
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, Node> map;
        int ans=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            //cout<<i<<" "<<j<<endl;
            if(map[s[i]].count==0){
                map[s[i]].count=1;
                map[s[i]].ind=i;
                if((i-j+1)>ans){
                    ans=i-j+1;
                }
            }
            else{
                int lastoccur=map[s[i]].ind;
                for(;j<=lastoccur;j++){
                    map[s[j]].count=0;
                    map[s[j]].ind=-1;
                }
                map[s[i]].count=1;
                map[s[i]].ind=i;
                
            }
        }
        
        return ans;
    }
};
