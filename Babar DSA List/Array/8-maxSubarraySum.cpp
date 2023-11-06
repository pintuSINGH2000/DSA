//Kadane Algorithm

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long sum=arr[0],maxGlobal=arr[0];
        
        for(int i=1;i<n;i++){
            sum=max(sum+ (long long)arr[i],(long long)arr[i]);
            maxGlobal=max(maxGlobal,sum);
        }
        return maxGlobal;
    }
};