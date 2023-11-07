// Smallest subarray with sum greater than x
//sliding window approach

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int j=0;
        int subArray=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            while(sum>x){
                subArray=min(subArray,i-j+1);
                sum-=arr[j++];
            }
        }
        return subArray==INT_MAX?0:subArray;
    }
};

TC(n)
SC(1)