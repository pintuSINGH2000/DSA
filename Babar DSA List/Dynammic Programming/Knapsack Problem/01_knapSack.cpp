0 - 1 Knapsack Problem

You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value 
in the knapsack. Note that we have only one quantity of each item.
In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items
respectively. Also given an integer W which represents knapsack capacity. 
find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W.
You cannot break an item, either pick the complete item or dont pick it (0-1 property)


//recursve +memoization
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n,vector<int>(W+1,-1));
       return solve(wt,val,W,n-1,dp);
    }
    
    int solve(int wt[],int val[],int w,int n,vector<vector<int>>& dp){
        if(n<0||w<=0) return 0;
        if(dp[n][w]!=-1) return dp[n][w];
        if(w-wt[n]>=0){
            return dp[n][w]=max(solve(wt,val,w,n-1,dp),val[n]+solve(wt,val,w-wt[n],n-1,dp));
        }else{
            return dp[n][w]=solve(wt,val,w,n-1,dp);
        }
    }
};

//iterative
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n+1,vector<int>(W+1,0));
       for(int i=1;i<=n;i++){
           for(int j=1;j<=W;j++){
               if(j-wt[i-1]>=0){
                   dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
               }else{
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
       return dp[n][W];
    }
};

// space optimization
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<int> dp(W+1,0);
       for(int i=1;i<=n;i++){
           vector<int> temp(W+1);
           for(int j=1;j<=W;j++){
               if(j-wt[i-1]>=0){
                   temp[j]=max(dp[j],val[i-1]+dp[j-wt[i-1]]);
               }else{
                   temp[j]=dp[j];
               }
           }
           dp=temp;
       }
       
       return dp[W];
    }
};
