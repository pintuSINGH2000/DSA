// Distinct Subsequences
// Given two strings s and t, return the number of distinct subsequences of s which equals t.

//if both char are equal of s and t then we have to two option take t[j] or not 
//else we don't have to take t[j]
//recursive
class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(s,t,0,0,dp);
    }
    int solve(string s,string t,int i,int j,vector<vector<int>> &dp){
        if(j>=t.length()) return 1;
        if(i>=s.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
           return dp[i][j]=solve(s,t,i+1,j,dp)+solve(s,t,i+1,j+1,dp);
        }else{
           return dp[i][j]=solve(s,t,i+1,j,dp);
        }
    }
}

//iterative
class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++){
            dp[i][m]=1;
        }
        for(int i=n-1;i>=0;i--){
           for(int j=m-1;j>=0;j--){
              if(s[i]==t[j]){
                dp[i][j]=(dp[i+1][j]+dp[i+1][j+1])%1000000007;
               }else{
                dp[i][j]=dp[i+1][j];
               }
            }
        }
        return dp[0][0];
    }
};
TC(n*n)
SC(n*n)

//space optimazation

class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<int> dp(m+1,0);
        dp[m]=1;
        for(int i=n-1;i>=0;i--){
              vector<int> temp(m+1,0);
              temp[m]=1;
           for(int j=m-1;j>=0;j--){
              if(s[i]==t[j]){
                temp[j]=(dp[j]+dp[j+1])%1000000007;
               }else{
                temp[j]=dp[j];
               }
            }
            dp=temp;
        }
        return dp[0];
    }
};

TC(n*n)
SC(n)