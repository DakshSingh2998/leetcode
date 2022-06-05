//https://leetcode.com/problems/longest-increasing-subsequence/
///////////////////////// only dp can give length of lis and elements too
class Solution {
public:
    void pr(vector<int> &arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, 1);
        int ans=1;
        for(int i=1;i<n;i++){
            int tempm=1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    tempm=max(tempm, dp[j]+1);
                }
            }
            dp[i]=max(dp[i],tempm);
            ans=max(ans, tempm);
        }
        //pr(dp);
        return ans;
        
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////// bs with dp can only give length

class Solution {
public:
    void pr(vector<int> &arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }
    int lengthOfLIS(vector<int> nums) {
        int n=nums.size();
        vector<int> dp;
        dp.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]>dp.back()){
                dp.push_back(nums[i]);
            }
            else{
                int ind=lower_bound(dp.begin(), dp.end(), nums[i])-dp.begin();
                dp[ind]=nums[i];
            }
        }
        return dp.size();
        
    }
};
