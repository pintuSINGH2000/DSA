//Count Inversions
//solve using merge sort

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.

    long long int count=0;
    long long int mergeSort(long long arr[],long long left,long long right){
        if(left<right){
            long long mid=left+(right-left)/2;
            mergeSort(arr,left,mid);
            mergeSort(arr,mid+1,right);
            merge(arr,left,mid,right);
        }
    }
    
    void merge(long long arr[],long long left,long long mid,long long right){
        long long i=left;
        long long j=mid+1;
        std::vector<long long> temp;
        while(i<=mid&&j<=right){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;

                count+=mid-i+1;
            }
        }
        
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=right){
            temp.push_back(arr[j]);
            j++;
        }
        int l=0;
        for(int k=left;k<=right;k++){
            arr[k]=temp[l++];
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {
        mergeSort(arr,0,N-1);
        return count;
    }
};

TC(nlogn)
SC(n);