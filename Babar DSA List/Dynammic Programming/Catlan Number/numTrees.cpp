// Unique Binary Search Trees
number of tree root=number of way at left subtree*number of way right;


class Solution {
public:
    int numTrees(int n) {
      vector<int> dp(n+1,-1);
      return solve(n,dp);
    }
    int solve(int n,vector<int>& dp){
       if(n<=1) return 1;
       if(dp[n]!=-1) return dp[n];
       int ans=0;
       for(int j=1;j<=n;j++){
         ans+=solve(j-1,dp)*solve(n-j,dp);
       }
       return dp[n]=ans;
    }
};

class Solution {
public:
    int numTrees(int n) {
      vector<long int> dp(n+1,0);
      dp[0]=1;
      dp[1]=1;
      unsigned long int res=0;
      for(int i=2;i<=n;i++){
        dp[i]=0;
        for(int j=1;j<=i;j++){
         dp[i]+=dp[j-1]*dp[i-j];
        }
      } 
      return dp[n];
    }
};

//catlan number
class Solution {
public:
    int numTrees(int n) {
      vector<long int> dp(n+1,0);
      dp[0]=1;
      dp[1]=1;
      unsigned long int res=0;
      for(int i=2;i<=n;i++){
        dp[i]=0;
        for(int j=0;j<i;j++){
         dp[i]+=dp[j]*dp[i-j-1];
        }
      } 
      return dp[n];
    }
};

