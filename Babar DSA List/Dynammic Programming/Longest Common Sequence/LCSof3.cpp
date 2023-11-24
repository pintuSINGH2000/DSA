// LCS of three strings




class Solution{
    public:
        int LCSof3 (string x, string y, string z, int n, int m, int l)
        {
                vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(m+1,vector<int>(l+1,0)));
                
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        for(int k=1;k<=l;k++){
                            if(x[i-1]==y[j-1] && y[j-1]==z[k-1]){
                                dp[i][j][k]=1+dp[i-1][j-1][k-1];
                            }else{
                                dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                            }
                        }
                    }
                }
                return dp[n][m][l];
        }
}