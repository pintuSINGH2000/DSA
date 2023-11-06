// Buy and Sell a Share at most twice


//recursive approach
class Solution
{
    public:
    int maxProfit(vector<int>&price){
        int n=price.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2,vector<int>(3, -1)));
        return solve(price,0,2,1,dp);
    }

    int solve(vector<int>& prices,int i,int k,int canBuy,vector<vector<vector<int>>>& dp){
    if(i>=prices.size()) return 0;
    if(k<=0) return 0;
    if(dp[i][canBuy][k]!=-1) return dp[i][canBuy][k];
    if(canBuy){
        //user can buy
       return dp[i][canBuy][k]=max(solve(prices,i+1,k,canBuy,dp),-prices[i]+solve(prices,i+1,k,0,dp));    
    }else{
        //user can sell
       return dp[i][canBuy][k]=max(solve(prices,i+1,k,canBuy,dp),prices[i]+solve(prices,i+1,k-1,1,dp));
    }
   }
};

TC(n)
SC(n*2*3+height of recursive tree);


//iterative approach
class Solution
{
    public:
    int maxProfit(vector<int>&price){
    int n=price.size();
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2,vector<int>(3, 0)));
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=2;j++){
          dp[i][1][j]=max(dp[i+1][1][j],-price[i]+dp[i+1][0][j]);//buy
          dp[i][0][j]=max(dp[i+1][0][j],price[i]+dp[i+1][1][j-1]);//sell
        }
    }
    return dp[0][1][2];
    }
};

TC(n)
SC(n*2*3);
//space optimization

class Solution
{
    public:
    int maxProfit(vector<int>&price){
    int n=price.size();
    vector<vector<int>> prev(2,vector<int>(3,0));
    vector<vector<int>> curr(2,vector<int>(3,0));
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=2;j++){
            curr[1][j]=max(prev[1][j],-price[i]+prev[0][j]);//buy
            curr[0][j]=max(prev[0][j],price[i]+prev[1][j-1]);//sell
            prev=curr;
        }
    }
    return curr[1][2];
   }
}

TC(n)
SC(2*3)=SC(1)