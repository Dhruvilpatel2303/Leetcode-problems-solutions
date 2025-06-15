class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // bruute-force-solution
        // time-complexicity = O(n^2)
        // space-complexicity =o(1)

        // int maxele;

        // for (int i = 0; i < nums.size(); i++) {

        //     int count = 0;
        //     for (int j = 0; j < nums.size(); j++) {
        //         if (nums[i] == nums[j]) {
        //             count++;
        //         }
        //     }

        //     if (count >= (nums.size() / 2)) {
        //         return nums[i];
        //     }
        // }

        // return -1;

        // better-approach-using-hashmap
        // time-complexicity =O(N*logN) + O(N)
        // space-complexicity=o(n)

        // map<int,int> mpp;

        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }

        // for(auto ele : mpp){
        //     if(ele.second > nums.size()/2){
        //         return ele.first;
        //     }
        // }

        // return -1;
    }
};