class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // brute-force-solution
        // time-complexiciity =O(n^2)
        // space-complexiicty =O(n)

        // vector<int> ans(arr.size());
        // int index=0;

        // for(int i=0;i<arr.size()-1;i++){
        //     int maxele=arr[i+1];
        //     for(int j=i+1;j<arr.size();j++){
        //         maxele=max(maxele,arr[j]);

        //     }
        //     ans[index]=maxele;
        //     index++;

        // }

        // ans[index]=-1;
        // return ans;

        // better-approach-using-reverse-beacuse allways we need to find the
        // rightmostt maxele which can be replaced
        //


        vector<int> ans(arr.size());
        int maxright=-1;

        for(int i=arr.size()-1;i>=0;i--){
            ans[i]=maxright;
            maxright=max(maxright,arr[i]);
        }

        return ans;
    }
};