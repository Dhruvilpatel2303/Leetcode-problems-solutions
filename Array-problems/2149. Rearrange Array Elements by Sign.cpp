class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {


        //brute-force-solution
        //time-complexicity =O(n)
        //space-complexicity =O(2n)


        // vector<int> pos;
        // vector<int> neg;
        // int n=nums.size();


        // for(int i=0;i<n;i++){
        //     if(nums[i]<0){
        //         neg.push_back(nums[i]);

        //     }
        //     else{
        //         pos.push_back(nums[i]);
        //     }
        // }
        // int j=0;

        // for(int i=0;i<pos.size();i++){
        //     nums[2*i]=pos[j];
        //     nums[2*i+1]=neg[j];
        //     j++;
        // }
        // return nums;



        //better-approach-using -two-pointer
        //time-complexicity =O(n)
        //space-complexicity =O(n)

        // int pos=0;
        // int neg=1;
        // int n=nums.size();
        // vector<int> ans(n,0);



        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>=0){
        //         ans[pos]=nums[i];
        //         pos +=2;
        //     }else{
        //         ans[neg]=nums[i];
        //         neg +=2;
        //     }


        // }
        // return ans;


    }
};
