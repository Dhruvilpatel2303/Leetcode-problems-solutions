class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // normal-brute-force-solution
        // time-complexicity =O(n^2)
        // space-complexicity = O(1)
        //  int maxprofit=0;

        // for(int i=0;i<prices.size();i++){

        //     int test=prices[i];

        //     for(int j=i+1;j<prices.size();j++){
        //         int test2=prices[j]-prices[i];

        //         if(test2 > maxprofit){
        //             maxprofit =test2;
        //         }
        //     }
        // }
        // return maxprofit;

        // optimal-solution
        // time-complexicity = O(n)
        // space-complexicity =O(1)

        // int maxPro = 0;
        // int minPrice = INT_MAX;

        // for (int i = 0; i < prices.size(); i++) {
        //     minPrice = min(prices[i], minPrice);
        //     maxPro = max(maxPro, prices[i] - minPrice);
        // }

        // return maxPro;



        //two-pointer-solution
        //time-complexicity = O(n)
        //space-complexicity =O(1)
        // int left=0;
        // int right=1;
        // int maxprofit=0;

        // while(right<prices.size()){
        //     if(prices[left]<prices[right]){
        //         maxprofit=max(maxprofit,prices[right]-prices[left]);
        //     }
        //     else{
        //         left=right;

        //     }
        //     right++;
        // }
        // return maxprofit;
    }
};