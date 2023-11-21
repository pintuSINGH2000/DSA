// Subset Problem
// You are given an array 'A' of 'N' integers.
// You have to return true if there exists a subset of elements of 'A' that sums up to 'K'. Otherwise, return false.>

class Solution
{
    public:
        bool solve(vector<int> &a,int n,int k,vector<vector<int>>& dp){
            if(n<0||k<0) return false;
            if(k==0) return true;
            if(dp[n][k]!=-1) return dp[n][k];
            if(k-a[n]>=0){
                return dp[n][k]=solve(a,n-1,k,dp)||solve(a,n-1,k-a[n],dp);
            }else{
                return dp[n][k]=solve(a,n-1,k,dp);
            }
        }
        bool isSubsetPresent(int n, int k, vector<int> &a)
        {
            vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
            return solve(a,n-1,k,dp);
        }
}

// iterative
class Solution
{
    public:
        bool isSubsetPresent(int n, int k, vector<int> &a)
        {
            vector<vector<bool>> dp(n+1,vector<bool>(k+1,false));

            for(int i=0;i<=n;i++){
                dp[i][0]=true;
            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=k;j++){
                if(j-a[i-1]>=0){
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
                }
            }
            return dp[n][k];
        }
}

//space optimization
class Solution
{
    public:
       bool isSubsetPresent(int n, int k, vector<int> &a)
        {
            vector<bool> dp(k+1,false);

            dp[0]=true;
            for(int i=1;i<=n;i++){
                vector<bool> temp(k+1,false);
                temp[0]=true;
                for(int j=1;j<=k;j++){
                if(j-a[i-1]>=0){
                    temp[j]=dp[j] || dp[j-a[i-1]];
                }else{
                    temp[j]=dp[j];
                }
                }
                dp=temp;
            }
            return dp[k];
        }
}