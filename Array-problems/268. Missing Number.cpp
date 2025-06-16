class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // normal-solution

        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // if (nums[0] != 0) return 0;

        // for (int i = 0; i < n - 1; i++) {
        //     if (nums[i+1] != nums[i] + 1) {
        //         return nums[i] + 1;
        //     }
        // }
        // return nums[n - 1] + 1;

        // optimal-solution-using-summation
        //   int n = nums.size();
        //  int Tsum = (n*(n+1))/2;
        //  return  Tsum - accumulate(nums.begin(),nums.end(),0);

        // optimal-solution-using-xor
        //         int ans=0;
        //      for(int i=0;i<nums.size();i++){
        //        ans ^=nums[i];
        //      }

        // //2 xor all the index of array
        //      for(int i=0;i<=nums.size();i++){
        //       ans ^=i;
        //     }

        //   return ans;
    }
};