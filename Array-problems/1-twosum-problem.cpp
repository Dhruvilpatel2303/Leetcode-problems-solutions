class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

     // Solution one brute force solution
        // time-complexicity = O(n^2)
        // space-complexicity = O(1)

        // vector<int> ans;

        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //            return ans;
        //         }

        //     }
        // }
        // return ans;

    // better-approach-using hashing
    //time-complexicity = O(n)
    //space-complexicty =O(n)

        // unordered_map<int,int> mpp;

        // for(int i=0;i<nums.size();i++){
        //     int firstele = nums[i];
        //     int secondele = target - firstele;

        //     if(mpp.find(secondele) !=mpp.end()){
        //        return {mpp[secondele],i};

        //     }
        //     mpp[firstele] = i;

        // }
        // return {-1,-1};










    }
};