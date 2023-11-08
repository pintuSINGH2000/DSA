// Spirally traversing a matrix

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int top=0,bottom=r-1,left=0,right=c-1,dir=0;
        vector<int> ans;
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                  ans.push_back(matrix[top][i]);
                }
                 top++;
            }
            if(dir==1){
                for(int i=top;i<=bottom;i++){
                  ans.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir==2){
                for(int i=right;i>=left;i--){
                  ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(dir==2){
                for(int i=bottom;i>=top;i--){
                  ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};