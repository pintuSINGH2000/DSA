// Merge Without Extra Space
//compare last element of first array and first element second array if last element is greater than swap else they are sorted.

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i=n-1;
            int j=0;
            while(i>=0 && j<=m-1){
                if(arr1[i]>=arr2[j]){
                    std::swap(arr1[i],arr2[j]);
                    i--;
                    j++;
                }else break;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};

TC(nlogn)
SC(1)