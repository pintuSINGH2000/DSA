// Trapping Rain Water
//inituation
// we have to count total water collected at each building
// so we can calculate by find minimum height of nearest left and right building and subtract current building 



class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        vector<int> left(n,0);
        vector<int> right(n,0);
        int maxValue=0;
        for(int i=0;i<n;i++){
            maxValue=max(maxValue,arr[i]);
            left[i]=maxValue;
        }
        maxValue=0;
        for(int j=n-1;j>=0;j--){
            maxValue=max(maxValue,arr[j]);
            right[j]=maxValue;
        }
        
        long long totalWater=0;
        for(int i=0;i<n;i++){
            totalWater+=min(left[i],right[i])-arr[i];
        }
        return totalWater;
    }
};

TC(N)
SC(N)

// space optimazation

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
       int left=0,right=n-1;
       int maxLeft=0,maxRight=0;
       long long totalWater=0;
       
       while(left<=right){
           if(maxRight>=maxLeft){
               totalWater+=max((long long)(maxLeft-arr[left]),(long long)0);
               maxLeft=max(maxLeft,arr[left]);
               left++;
           }else{
               totalWater+=max((long long)(maxRight-arr[right]),(long long)0);
               maxRight=max(maxRight,arr[right]);
               right--;
           }
       }
       return totalWater;
    }
};

TC(N)
SC(1)
