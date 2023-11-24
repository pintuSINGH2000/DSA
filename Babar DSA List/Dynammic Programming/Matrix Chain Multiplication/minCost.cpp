// Minimum Cost to Cut a Stick

//recursive+memoization
class Solution {
public:
    int minCost(int n, vector<int>& nums) {
        nums.insert(nums.begin(),0);
        nums.push_back(n);
        int m=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> dp(nums.size(),vector<int>(nums.size(),-1));
        return solve(nums,1,m-2,dp);
    }

    int solve(vector<int>& nums,int i,int j,vector<vector<int>>& dp){
        if(i>j) return 0;
         if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int ans=INT_MAX;
        for(int k=i;k<=j;k++){
          ans=min(ans,nums[j+1]-nums[i-1]+solve(nums,i,k-1,dp)+solve(nums,k+1,j,dp));
        }
        return dp[i][j]=ans;
    }
};

//iterative
class Solution {
public:
    int minCost(int n, vector<int>& nums) {
        nums.insert(nums.begin(),0);
        nums.push_back(n);
        int m=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> dp(nums.size(),vector<int>(nums.size(),0));
        
        for(int i=m-2;i>=1;i--){
            for(int j=i;j<=m-2;j++){
                int ans=INT_MAX;
                for(int k=i;k<=j;k++){
                    ans=min(ans,nums[j+1]-nums[i-1]+dp[i][k-1]+dp[k+1][j]);
                }
                dp[i][j]=ans;
            }
        }
        return dp[1][m-2];
    }
};
