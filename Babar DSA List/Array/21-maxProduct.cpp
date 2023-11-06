// Maximum Product Subarray
//keep to pointer minProduct and maxProduct  


class Solution{
public:
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long maxProduct=arr[0];
	    long long minProduct=arr[0];
	    long long maxProductSoFar=arr[0];
	    
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            swap(maxProduct,minProduct);
	        }
	        maxProduct=max((long long)arr[i],maxProduct*arr[i]);
	        minProduct=min((long long)arr[i],minProduct*arr[i]);
	        maxProductSoFar=max(maxProduct,maxProductSoFar);
	    }
	    return maxProductSoFar;
	}
};

TC(n)
SC(1)