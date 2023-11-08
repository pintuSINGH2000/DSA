// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            if(matrix[i][m-1]<target) continue;
            return binary_search(matrix[i].begin(),matrix[i].end(),target)?true:false;
        }
        return false;
    }
};

TC(nlogm)
SC(1)

//using binary search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=n*m-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int row=mid/m,col=mid%m;
            if(matrix[row][col]==target) return true;
            if(matrix[row][col]>target) right=mid-1;
            else left=mid+1;
        }
        return false;
    }
};

TC(log(m+n))
SC(1)