// Subarray with 0 sum

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> set;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0||set.find(sum)!=set.end()) return true;
            set.insert(sum);
        }
        return false;
    }
};

TC(n)
SC(n)