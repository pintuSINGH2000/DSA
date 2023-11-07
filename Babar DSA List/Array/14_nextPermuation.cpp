//find pair which is small than its next element
//find element greater than small element from last
// swap small and greater element
//reverse all element after small and before greater


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while(i>=0&&nums[i]>=nums[i+1]){
            i--;
        }

        int j=n-1;
        if(i>=0){
        while(j>=0&& nums[j]<=nums[i]){
          j--;
        }
        std::swap(nums[i],nums[j]);
        }
        std::reverse(nums.begin()+i+1,nums.end());
    }
};

TC(n)
SC(1)