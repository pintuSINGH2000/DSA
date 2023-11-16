// Edit Distance

// Given two strings s and t. Return the minimum number of operations required to convert s to t.
// The possible operations are permitted:

// Insert a character at any position of the string.
// Remove any character from the string.
// Replace any character from the string with any other character.

//if replace we move both pointer of i and j
//if delete then we only move j pointer
//if insert then we move only i pointer

// recursive+memoization
class Solution {
  public:
    int editDistance(string s, string t) {
        
        int n=s.length(),m=t.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(s,t,n-1,m-1,dp);;
    }
    int solve(string s,string t,int i,int j,vector<vector<int>>& dp){
        if(i<0 & j<0) return 0;
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            return dp[i][j]=solve(s,t,i-1,j-1,dp);
        }else{
            return dp[i][j]=1+min(solve(s,t,i-1,j,dp),min(solve(s,t,i,j-1,dp),solve(s,t,i-1,j-1,dp)));
        }
    }
};

//top-bottom
class Solution {
  public:
    int editDistance(string s, string t) {
        
        int n=s.length(),m=t.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++) dp[i][0]=i;
        for(int j=0;j<=m;j++) dp[0][j]=j;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                    }
            }
        }
        return dp[n][m];
    }
};