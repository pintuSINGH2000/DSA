//arrange all negative first and than positive by maintaing their order
//find first positive element in mid-left and first positive element in mid+1-right
//reverse all positive element in mid-left and all negative elemnt in mid+1-right
//reverse all element from first positive of mid-left to first positeve of mid+1-right
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            mergeSort(arr,0,n-1);
        }
        
        void mergeSort(int arr[],int left,int right){
            if(left<right){
                int mid=left+(right-left)/2;
                mergeSort(arr,left,mid);
                mergeSort(arr,mid+1,right);
                merge(arr,left,mid,right);
            }
        }
        
        void merge(int arr[],int left,int mid,int right){
            int i=left;
            int j=mid+1;
            while(i<=mid&&arr[i]<0){
                i++;
            }
            while(j<=right&&arr[j]<0){
                j++;
            }
            reverse(arr+i,arr+mid+1);
            reverse(arr+mid+1,arr+j);
            reverse(arr+i,arr+j);
        }
};