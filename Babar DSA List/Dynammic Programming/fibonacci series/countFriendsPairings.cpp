//Friends Pairing Problem

//to make friend in pair we have n-1 way so (n-1)*solve(n-2)

//recursive +memoisation
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
TC(N)
SC(N+auxilary space)
//recursive
class Solution
{
    int mod=1000000007;
public:
    int countFriendsPairings(int n) 
    { 
        vector<long int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+((i-1)*dp[i-2])%mod)%mod;
        }
        return dp[n];
    }
    
};

TC(N)
SC(N)

//space optimization
class Solution
{
    int mod=1000000007;
public:
    int countFriendsPairings(int n) 
    { 
        long int a=1;
        long int b=1;
        
        for(int i=2;i<=n;i++){
            long int c=(b+((i-1)*a)%mod)%mod;
            a=b;
            b=c;
        }
        return b;
    }
    
};

TC(N)
SC(1)