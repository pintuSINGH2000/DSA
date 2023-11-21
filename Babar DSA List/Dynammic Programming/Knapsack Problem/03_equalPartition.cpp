// Partition Equal Subset Sum
// Given an array arr[] of size N, 
// check if it can be partitioned into two parts such that the sum of elements in both parts is the same.

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++) sum += arr[i];
        if(sum % 2 != 0) return 0;
 
        return isSubsetPresent(N, sum/2,arr);
        
    }
    bool isSubsetPresent(int n, int k,int a[])
        {
            vector<bool> dp(k+1,false);

            dp[0]=1;
            for(int i=1;i<=n;i++){
                vector<bool> temp(k+1,false);
                temp[0]=1;
                for(int j=1;j<=k;j++){
                if(j-a[i-1]>=0){
                    temp[j]=dp[j] || dp[j-a[i-1]];
                }else{
                    temp[j]=dp[j];
                }
                }
                dp=temp;
            }
            return dp[k];
        }
};