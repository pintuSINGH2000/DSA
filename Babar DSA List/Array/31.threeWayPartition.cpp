// Three way partitioning
// we have to partition in three part just like sort012 so use Dutch National Flag algorithm


class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int n=arr.size();
        int left=0,current=0,right=n-1;
        
        while(current<=right){
            if(arr[current]<a){
                swap(arr[current],arr[left]);
                left++;
                current++;
            }else if(arr[current]>b){
                swap(arr[current],arr[right]);
                right--;
            }else{
                current++;
            }
        }
    }
};

TC(N)
SC(1)