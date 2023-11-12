// Minimum Operations to Maximize Last Elements in Arrays
// You are given two 0-indexed integer arrays, nums1 and nums2, both having length n.

// You are allowed to perform a series of operations (possibly none).

// In an operation, you select an index i in the range [0, n - 1] and swap the values of nums1[i] and nums2[i].

// Your task is to find the minimum number of operations required to satisfy the following conditions:

// nums1[n - 1] is equal to the maximum value among all elements of nums1, i.e., nums1[n - 1] = max(nums1[0], nums1[1], ..., nums1[n - 1]).
// nums2[n - 1] is equal to the maximum value among all elements of nums2, i.e., nums2[n - 1] = max(nums2[0], nums2[1], ..., nums2[n - 1]).
// Return an integer denoting the minimum number of operations needed to meet both conditions, or -1 if it is impossible to satisfy both conditions.

//intitution
//compare every element with last element of both array in two case:
// case1: last without swap
// case2: last with swap 

class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int max1=0;
        int max2=0;
        
        for(int i=0;i<n-1;i++){
            if(nums1[i]<=nums1[n-1]&&nums2[i]<=nums2[n-1]) continue;
            else if(nums1[i]<=nums2[n-1]&&nums2[i]<=nums1[n-1]) max1++;
            else{
                max1=INT_MAX;
                break;
            }
        }
        
        max2=1;
        swap(nums1[n-1],nums2[n-1]);
        for(int i=0;i<n-1;i++){
            if(nums1[i]<=nums1[n-1]&&nums2[i]<=nums2[n-1]) continue;
            else if(nums1[i]<=nums2[n-1]&&nums2[i]<=nums1[n-1]) max2++;
            else{
                max2=INT_MAX;
                break;
            }
        }
        int ans=min(max1,max2);
        if(ans==INT_MAX) return -1;
        return ans;
      
    }
};

TC(n)
SC(1)