// Minimize the Heights II


class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
          sort(arr, arr + n);
          int min=arr[0];
          int max=arr[n-1];
          int ans=max-min;
          
          for(int i=1;i<n;i++){
              if(arr[i]-k<0) continue;
              int tempmin=min(arr[0]+k,arr[i]-k);
              int tempmax=max(arr[n-1]-k,arr[i-1]+k);
              ans=min(ans,tempmax-tempmin);
          }
          return ans;
    }
};

TC(nlogn)
SC(1)
