// Nth catalan number


class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        int mod=1000000007;
      vector<long int> dp(n+1,0);
      dp[0]=1;
      dp[1]=1;
      unsigned long int res=0;
      for(int i=2;i<=n;i++){
        dp[i]=0;
        for(int j=0;j<i;j++){
         dp[i]=(dp[i]+(dp[j]*dp[i-j-1])%mod)%mod;
        }
      } 
      return dp[n];
    }
};