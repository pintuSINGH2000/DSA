

class Solution
{
    int mod=1000000007;
public:
    int countFriendsPairings(int n) 
    { 
        vector<long int> dp(n+1,-1);
        return solve(n,dp);
    }
    
    long int solve(int n,vector<long int>& dp){
        if(n==1) return 1;
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(solve(n-1,dp)+((n-1)*solve(n-2,dp))%mod)%mod;
    }
};  