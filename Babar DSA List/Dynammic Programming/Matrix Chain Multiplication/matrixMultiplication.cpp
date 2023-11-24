

//recursive + memoization
class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
        return solve(arr,1,N-1,dp);
    }
    
    int solve(int arr[],int i,int j,vector<vector<int>>& dp){
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=INT_MAX;
        for(int k=i;k<j;k++){
            ans=min(ans,arr[i-1]*arr[k]*arr[j]+solve(arr,i,k,dp)+solve(arr,k+1,j,dp));
        }
        return dp[i][j]=ans;
    }
};

//iterative
class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N,vector<int>(N,0));
        
        for(int i=N-1;i>=1;i--){
            for(int j=i+1;j<=N-1;j++){
                int ans=INT_MAX;
                for(int k=i;k<j;k++){
                ans=min(ans,arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j]);
                } 
                dp[i][j]=ans;
            }
        }
        return dp[1][N-1];
    }
};

TC(N^3);
SC(N^2);