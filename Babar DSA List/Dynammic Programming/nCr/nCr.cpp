
nCr=n-1Cr-1+n-1Cr
c(n,r)=c(n-1,r-1)+c(n-1,r)

class Solution{
    long long mod=1000000007;
public:
    int nCr(int n, int r){
         vector<long long> dp(801,0);
         dp[0]=1;
         for(int i=1;i<=n;i++){
             for(int j=min(r,i);j>0;j--){
                 dp[j]=(dp[j-1]+dp[j])%mod;
             }
         }
         return dp[r];
    }
    
};

//optimize soloution pascal triangle
class Solution{
    long long mod=1000000007;
    public:
        int nCr(int n, int r){
            if(r>n) return 0;
            if((n-r)<r) r=n-r;
            vector<int> dp(r+1,0);
            dp[0]=1;
            for(int i=1;i<=n;i++){
                for(int j=min(r,i);j>0;j--){
                    dp[j]=(dp[j-1]+dp[j])%mod;
                }
            }
            return dp[r];
        }
    
};