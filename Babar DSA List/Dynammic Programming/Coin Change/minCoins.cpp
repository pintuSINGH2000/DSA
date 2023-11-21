// You are given an integer array coins representing coins of different denominations and
// an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. 
// If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.

//recursize+memoization
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    vector<vector<int>> dp(M+1,vector<int>(V+1,-1));
	    int result = solve(coins,V,M-1,dp); 
	    return result==INT_MAX-1?-1:result;
	} 
	
	int solve(int coins[], int sum,int i,vector<vector<int>>& dp){
	    if(i<0 || sum<0) return INT_MAX-1;
	    if(sum==0) return 0;
	    if(dp[i][sum]!=-1) return dp[i][sum];
	    if(sum-coins[i]>=0){
	        return dp[i][sum]=min(solve(coins,sum,i-1,dp),1+solve(coins,sum-coins[i],i,dp));
	    }else{
	        return dp[i][sum]=solve(coins,sum,i-1,dp);
	    }
	}	  
};

TC(n*m)
SC(n*m+auxilary Space(m));

//iterative
class Solution {
public:
    int coinChange(vector<int>& coins, int V) {
      int M=coins.size();
      vector<vector<int>> dp(M+1,vector<int>(V+1, 0));
      for(int i=1;i<=V;i++){
        dp[0][i]=INT_MAX-1;
			}
			for(int i=1;i<=M;i++){
				for(int j=1;j<=V;j++){
           if(j-coins[i-1]>=0){
						 dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
					 }else{
						 dp[i][j]=dp[i-1][j];
					 }
				}
			}
	    return dp[M][V]==INT_MAX-1?-1:dp[M][V]; 
    }
};
TC(n*m)
SC(n*m);

//space optimization 
class Solution {
public:
    int coinChange(vector<int>& coins, int V) {
      int M=coins.size();
      vector<int> dp(V+1, 0);
      for(int i=1;i<=V;i++){
        dp[i]=INT_MAX-1;
			}
			for(int i=1;i<=M;i++){
				for(int j=1;j<=V;j++){
                    if(j-coins[i-1]>=0){
						dp[j]=min(dp[j],1+dp[j-coins[i-1]]);
					}
				}
			}
	    return dp[V]==INT_MAX-1?-1:dp[V]; 
    }
};