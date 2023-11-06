// Longest consecutive subsequence

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
       int a[100001]={0};
	   for(int i=0;i<N;i++){
	       a[arr[i]]++;
	   }
	   
	   int count=0,longestSeq=0;
	   for(int i=0;i<100001;i++){
	       if(a[i]==0){
	           longestSeq=max(count,longestSeq);
	           count=0;
	       }else{
	           count++;
	       }
	   }
	   return longestSeq;
    }
};

TC(N)
SC(N)