// Count Palindromic Subsequences
//single letter are always palindrome
//in two letter if two are not equal then they only make two single palindrome else they make three p-seq
//for other if first and last are equal then we can add 1 to prev making palindorme c=c1+c2+1;
//else me have to subtract middle from prev making palindrome c=c1+c2-m; m is occurring in both c1 && c2;
//  eg aab a,a,b single length for, aa we can make three a a aa and for ab a b , now for aab here first and last are not equal 
// so we have to take previous but in previous a is occurring in both so we have to subtract is 3+3-1;

class Solution{
    int MOD=1000000007;
    public:
    /*You are required to complete below method */
    long long int  countPS(string s)
    {
        int n=s.length();
         vector<vector<long long int>> dp(n,vector<long long int>(n,0));
         for(int gap=0;gap<n;gap++){
             for(int i=0,j=gap;j<n;j++,i++){
                 if(gap==0){
                     dp[i][j]=1;
                 }else if(gap==1){
                     if(s[i]==s[j]){
                         dp[i][j]=3;
                     }else{
                         dp[i][j]=2;
                     }
                 }else{
                     if(s[i]==s[j]){
                         dp[i][j]=(dp[i+1][j]+dp[i][j-1]+1)%MOD;
                     }else{
                         dp[i][j]=((dp[i+1][j]+dp[i][j-1])%MOD+MOD-dp[i+1][j-1])%MOD;
                     }
                 }
             }
         }
         return dp[0][n-1];
    }
     
};