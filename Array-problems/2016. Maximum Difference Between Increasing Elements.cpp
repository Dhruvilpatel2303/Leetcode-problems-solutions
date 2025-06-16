class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        //brute-force-solution
        //time-complexicity= O(n^2)
        //space-complexicity = O(1)
        // int diff=-1;
        // int n=nums.size();


        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[j] > nums[i]){
        //             diff=max(diff,nums[j]-nums[i]);
        //         }
        //     }
        // }
        // return diff;




        //min-max-logic-solution-better-approach

        int diff=-1;
        int mn=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i] > mn){
                diff=max(diff,nums[i]-mn);
            }

            if(nums[i] < mn) mn=nums[i];
        }

    return diff;

    }
};