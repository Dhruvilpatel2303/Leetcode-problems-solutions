class Solution {
public:
    int maxSubArray(vector<int>& arr) {

        // better-approach-

        //         Time Complexity: O(N2), where N = size of the array.
        // Reason: We are using two nested loops, each running approximately N
        // times.

        // Space Complexity: O(1) as we are not using any extra space.
        // int maxi = INT_MIN;
        // int n = arr.size(); // maximum sum

        // for (int i = 0; i < n; i++) {
        //     int sum = 0;
        //     for (int j = i; j < n; j++) {

        //         sum += arr[j];

        //         maxi = max(maxi, sum);
        //     }
        // }

        // return maxi;


        //optimal code using-kaden's algorithm
        //time-complexicity =O(n)
        //space-complexicity =O(1)

        long long maxSum=LONG_MIN;
        long long sum=0;

        for(int i=0;i<arr.size();i++){
            sum +=arr[i];

            if(sum > maxSum){
                maxSum = sum;
            }

            if(sum < 0){
                sum=0;
            }

        }
        return maxSum;
    }   
};