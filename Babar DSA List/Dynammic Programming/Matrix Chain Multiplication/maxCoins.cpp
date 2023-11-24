// Burst Balloons

//select first ballon which give high value by multiplication with first and last then select second this time one one will replace with max value.
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(nums,1,n,dp);
    }
    int solve(vector<int>& nums,int i,int j,vector<vector<int>>& dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=INT_MIN;
        for(int k=i;k<=j;k++){
           ans=max(ans,nums[i-1]*nums[k]*nums[j+1]+solve(nums,i,k-1,dp)+solve(nums,k+1,j,dp));
        }
        return dp[i][j]=ans;
    }
};

iterative
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        vector<vector<int>> dp(n+2,vector<int>(n+2,0));

        for(int i=n;i>=1;i--){
            for(int j=i;j<=n;j++){
                int ans=INT_MIN;
                for(int k=i;k<=j;k++){
                ans=max(ans,nums[i-1]*nums[k]*nums[j+1]+dp[i][k-1]+dp[k+1][j]);
                }
                dp[i][j]=ans;
            }
        }
        return dp[1][n];
    }
};