// Minimum number of jumps

class Solution{
  public:
    int minJumps(int arr[], int n){
      int max=0;
      int j=0,count=0;
      for(int i=0;i<n-1;i++){
          if(i>j) return -1;
          max=max(i+arr[i],max);
          if(j==i){
              count++;
              j=max;
          }
      }
      if(j<n-1) return -1;
      return count;
    }
};

TC(n)
SC(1)