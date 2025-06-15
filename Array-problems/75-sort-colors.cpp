class Solution {
public:
    void sortColors(vector<int>& nums) {


        //normal-solution
        //count the total 0,1,2 and accroding to that add 0,1,2 by loop in array nums
        //time-complexicity =O(n)
        //space-complexicity =O(n)
        








        //Dutch-national-flag-algorithm
        //time-complexicity = O(n)
        //space-complexicity =O(1)
        int num=nums.size();
        int left=0;
        int right=num-1;
        int index=0;

        while(index<=right){
            if(nums[index]==0){
                swap(nums[index],nums[left]);
                index++;
                left++;

            }
            else if(nums[index]==2){
                swap(nums[right],nums[index]);
                right--;
         
            }
            else{
                index++;
            }
        }


    
        
    }
};