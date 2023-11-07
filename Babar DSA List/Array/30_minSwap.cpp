// Minimum swaps and K together
// first count number of element less than k and than make do sliding window of count size and calculate minimum number of swap

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k) count++;
        }
        
        if(count==0) return 0;
        int swapRequired=0;
        int j=0;
        int minSwap=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                swapRequired++;
            }
            if(i>=count-1){
                minSwap=min(minSwap,swapRequired);
                if(arr[j]>k){
                    swapRequired--;
                }
                j++;
            }
        }
        return minSwap;
    }
};

TC(N);
SC(1);