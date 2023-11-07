// Chocolate Distribution Problem
// sort the array and subtract (i+m)th element with ith and find min value

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long ans=INT_MAX;
    
    for(long i=0;i+m<=n;i++){
        ans=min(a[i+m-1]-a[i],ans);
    }
    return ans;
    }   
};

TC(nlogn);
SC(1);