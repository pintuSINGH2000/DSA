// Rotate by 90 degree
// Given a square matrix of size N x N.
// The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

//transpose the matrix then reverse by row.

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n/2;i++){
           for(int j=0;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[n-i-1][j];
                matrix[n-i-1][j]=temp;
           }
        }
    } 
};