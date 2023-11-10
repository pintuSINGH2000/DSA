// Find distinct elements
// Given a N x N matrix M. 
// Write a program to find count of all the distinct elements common to all rows of the matrix. Print count of such elements.

class Solution{
public:
    int distinct(vector<vector<int>> arr, int n)
    {
        unordered_map<int,int> distinctMap;
        
        for(int j=0;j<n;j++){
            distinctMap[arr[0][j]]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(distinctMap[arr[i][j]]==i){
                    distinctMap[arr[i][j]]=i+1;
                }
            }
        }
        int count=0;
        for(auto aa:distinctMap){
            if(aa.second==n) count++;
        }
        return count;
    }
};

TC(n*n)
SC(n)