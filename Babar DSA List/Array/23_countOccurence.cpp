// Count More than n/k Occurences
//keep frequency of element and check if >=k 
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        int size=n/k;
        int count=0;
        for(auto aa:map){
            if(aa.second>size) count++;
        }
        return count;
    }
};

TC(n)
SC(n)