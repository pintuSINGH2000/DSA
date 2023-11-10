// Given an n x n matrix mat[n][n] of integers,
// find the maximum value of mat(c, d) – mat(a, b) over all choices of indexes such that both c > a and d > b.

//here we use bootom up approach 
// calculate max of remaining after current element then sub(max-curr);
class Solution {
public:
    int findMaxValue(vector<vector<int>>&mat, int n)
    {
        int dp[n][n];
        int ans=INT_MIN;
        dp[n-1][n-1]=mat[n-1][n-1];
        int maxValue=mat[n-1][n-1];
        for(int i=n-2;i>=0;i--){
            if(mat[n-1][i]>maxValue){
                maxValue=mat[n-1][i];
            }
             dp[n-1][i]=maxValue;
        }
        maxValue=mat[n-1][n-1];
        for(int i=n-2;i>=0;i--){
            if(mat[i][n-1]>maxValue){
                maxValue=mat[i][n-1];
            }
            dp[i][n-1]=maxValue;
        }
        
        for(int i=n-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(dp[i+1][j+1]-mat[i][j]>ans){
                    ans=dp[i+1][j+1]-mat[i][j];
                }
                dp[i][j]=max({mat[i][j],dp[i+1][j],dp[i][j+1]});
            }
        }
        return ans;
    }
};

TC(N*N)
SC(N*N)

class Solution {
public:
    int findMaxValue(vector<vector<int>>&mat, int n)
    {
        vector<int> temp1(n);
        vector<int> temp2(n);
        int ans=INT_MIN;
        temp1[n-1]=mat[n-1][n-1];
        for(int i=n-2;i>=0;i--){
             temp1[i]=max(temp1[i+1],mat[n-1][i]);
        }
        
        for(int i=n-2;i>=0;i--){
            temp2[n-1]=max(temp1[n-1],mat[i][n-1]);
            for(int j=n-2;j>=0;j--){
                if(temp1[j+1]-mat[i][j]>ans){
                    ans=temp1[j+1]-mat[i][j];
                }
                temp2[j]=max({mat[i][j],temp1[j],temp2[j+1]});
            }
            temp1=temp2;
        }
        return ans;
    }
};

TC(N*N)
SC(N)