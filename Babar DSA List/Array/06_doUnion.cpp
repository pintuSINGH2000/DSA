// Union of two arrays

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> set;
        for(int i=0;i<n;i++){
            set.insert(a[i]);
        }
        for(int j=0;j<m;j++){
            set.insert(b[j]);
        }
        return set.size();
    }
};

