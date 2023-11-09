// Row with max 1s
// Given a boolean 2D array of n x m dimensions where each row is sorted.
// Find the 0-based index of the first row that has the maximum number of 1's.
//here given row is sorted so we can use binary search to count one.

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max=0,ans=-1;
	    for(int i=0;i<n;i++){
	       int temp= maxOne(arr[i],m);
	       if(temp>max){
	           max=temp;
	           ans=i;
	       }
	       }
	    return ans;
	}
	
	int maxOne(vector<int> &arr,int n){
	    int left=0;
	    int right=n-1;
	    while(left<=right){
	        int mid=left+(right-left)/2;
	        if(arr[mid]==1){
	            right=mid-1;
	        }else{
	            left=mid+1;
	        }
	    }
	    return n-left;
	}
};
TC(nlogm);
SC(1)