class Solution {
public:
    int lengthOfLastWord(string s) {
        // int start = 0;
        // int currsize = 0;
        // bool isword = false;

        // // Start from the end of the string
        // for (int i = s.size() - 1; i >= 0; i--) {
        //     if (s[i] != ' ') {
        //         // Start counting the word
        //         currsize++;
        //         isword = true;
        //     } else if (isword) {
        //         // We just finished the last word
        //         break;
        //     }
        // }

        // return currsize;


         int n = s.length();
        int i = n - 1, length = 0;
        while (s[i] == ' ') i--;
        while (i >= 0 && s[i] != ' ') {
            i--;
            length++;
        }
        return length;
    }
};