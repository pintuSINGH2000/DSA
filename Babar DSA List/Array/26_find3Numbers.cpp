// Triplet Sum in Array
//first sort array and then use three pointer to check sum of three equal to x; 
//Here one pointer is constant and other two is moving

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int x)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
               if(A[i]+A[j]+A[k]==x) return true;
               if(A[i]+A[j]+A[k]>x) k--;
               else j++;
            }
            
        }
        return false;
    }

};

TC(N*N);
SC(1)