class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //brute-force-solution
        //time-complexicity =O(n)
        //space-complexicity=O(1)
        // int count=0;
        // int index=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0)
        //         count++;
        //     if(nums[i]!=0){
        //         nums[index]=nums[i];
        //         index++;
        //     }

        // }

        // while(count--){
        //     nums[index]=0;
        //     index++;
        // }


        //two-pointer-solution


        int i=0;
        int j=1;

        while(j<=nums.size()-1){
            if(nums[i]==0 && nums[j] !=0){
                swap(nums[i],nums[j]);
                i++;

                j++;
            }
            else if(nums[i]!=0 && nums[j==0]){
                i++;

            }
            else{
                j++;
            }
        }

        
    }
};