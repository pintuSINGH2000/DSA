// Coin Change
// Given an integer array coins[ ] of size N representing different denominations of currency and an integer sum,
// find the number of ways you can make sum by using different combinations from coins[ ].  
// Note: Assume that you have an infinite supply of each type of coin. And you can use any coin as many times as you want.

class Solution {
  public:
    long long int count(int coins[], int N, int sum) {
        
        vector<vector<long long int>> dp(N+1,vector<long long int>(sum+1,-1));
        
        return solve(coins,sum,N-1,dp);
    }
    long long int solve(int coins[],int sum,int n,vector<vector<long long int>>& dp){
        if(sum==0) return 1;
        if(sum<0||n<0) return 0;  
        if(dp[n][sum]!=-1) return dp[n][sum];
        long long int take =solve(coins,sum-coins[n],n,dp);
        long long int notTake=solve(coins,sum,n-1,dp);
        return dp[n][sum]=take+notTake;
    }
};
TC(N*sum)
SC(n*sum+auxilary space)
// iterative
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {
        
        vector<vector<long long int>> dp(N+1,vector<long long int>(sum+1,0));
        for(int i=0;i<=N;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=sum;j++){
               if(j-coins[i-1]>=0){
                   dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
               }else{
                   dp[i][j]=dp[i-1][j];
               }
            }
        }
        
        return dp[N][sum];
    }
};

TC(N*sum)
SC(n*sum)

//space optimization
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {
        
        vector<long long int> dp(sum+1,0);

        dp[0]=1;
        for(int i=0;i<N;i++){
            for(int j=coins[i];j<=sum;j++){
                 dp[j]+=dp[j-coins[i]];
            }
        }
        
        return dp[sum];
    }
};

TC(N*sum)
SC(sum)