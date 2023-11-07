// Array Subset of another array

class Solution
{
    string isSubset(int a1[], int a2[], int n, int m) 
    {
         unordered_map<long,long> map;
        for(long i=0;i<m;i++){
            map[a2[i]]++;
        }
        
        for(long i=0;i<n;i++){
            map[a1[i]]--;
        }
        
        for(auto aa:map){
            if(aa.second>0) return "No";
        }
        return "Yes";
   }
};

TC(N)
SC(N)

