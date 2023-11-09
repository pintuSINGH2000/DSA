// Median in a row-wise sorted Matrix
// Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the matrix.

// intitution
// it given r and c are always odd so for median we have to find only mid one
// here we have to calculate total element less than mid

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        int low=0;
        int high=1e9;
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=0;
            for(int i=0;i<R;i++){
                count+=smallThanMid(matrix[i],mid);
            }
            if(count<=(R*C)/2){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
    
    int smallThanMid(vector<int> &arr,int target){
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<=target){
               low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};
TC(32*R*log(C))
SC(1)