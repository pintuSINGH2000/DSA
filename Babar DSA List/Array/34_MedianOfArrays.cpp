// Median of 2 Sorted Arrays of Different Sizes
// using binary Search as given array are sorted 
// 1 for median we have to find half=((n+m-1)/2)th element;
// 2 so if we find find mid1 of first array (hlaf-mid1) will be the mid of second array.
// 3 if we can find mid such that l1(mid-1)<r1(mid2) && l2(mid2-1)<r1(mid1)
// 4 thus we have divided array in sorted manner so if odd return max(l1,l2) else return (max(l1,l2)+min(r1,r2))/2;

class Solution{
    public:
    double MedianOfArrays(vector<int>& a, vector<int>& b)
    {
        int n=a.size();
        int m=b.size();
        if(n>m){
            return MedianOfArrays(b,a);
        }
        
        int totalLength=n+m;
        int halfLength=(totalLength+1)/2;
        int left=0,right=n;
       
        while(left<=right){
            int mid1=left+(right-left)/2;
            int mid2=halfLength-mid1;
            int l1=INT_MIN,l2=INT_MIN,r1=INT_MAX,r2=INT_MAX;
            if(mid1<n) r1=a[mid1];
            if(mid2<m) r2=b[mid2];
            if(mid1-1>=0) l1=a[mid1-1];
            if(mid2-1>=0) l2=b[mid2-1];
            
            if(l1<=r2 && l2<=r1){
                if(totalLength%2==0){
                    return ((double)max(l1,l2)+min(r1,r2))/2;
                }else{
                    return max(l1,l2);
                }
            }
            
            if(l1>r2) right=mid1-1;
            else left=mid1+1;
        }
    return 0;
    }
};

TC(log(min(n,m)));
SC(1)