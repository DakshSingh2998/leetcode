//https://leetcode.com/problems/maximal-square/
class Solution {
public:
    void pr(vector<vector<int>> v){
        for (int i = 0; i < v.size(); i++) { // printing the 2D vector.
              for (int j = 0; j < v[i].size(); j++)
              cout << v[i][j] << " ";
              cout << endl;
   }
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=0;
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //cout<<i<<" "<<j<<endl;
                if(matrix[i][j]=='1')
                    dp[i+1][j+1]=min(dp[i][j+1], min(dp[i][j], dp[i+1][j]))+1;
                else{
                    //dp[i+1][j+1]=min(dp[i][j+1], min(dp[i][j], dp[i+1][j]));
                }
                ans=max(ans,dp[i+1][j+1]);
                
            }
        }
        //pr(dp);
        return ans*ans;
        
        
    }
};
// use dp
