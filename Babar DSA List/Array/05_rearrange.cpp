// Alternate positive and negative numbers

class Solution{
public:

	void rearrange(int arr[], int n) {
	    int a[n]={};
	    int l=0,m=n-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            a[l++]=arr[i];
	        }else{
	            a[m--]=arr[i];
	        }
	    }
	    l=0;
	    m=n-1;
	    for(int i=0;i<n;i++){
	        if(i%2!=0){
	            if(a[l]<0){
	                arr[i]=a[l++];
	            }else{
	                arr[i]=a[m--];
	            }
	        }else{
	            if(a[m]<0){
	                arr[i]=a[l++];
	            }else{
	                arr[i]=a[m--];
	            }
	        }
	    }
	}
};

TC(N)
SC(N)