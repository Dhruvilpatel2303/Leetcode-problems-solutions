class Solution {
public:
    bool rec(string& s, string& t, int i, int j) {
        if (i == s.size())
            return true;
        if (j == t.size())
            return false;
        if (s[i] == t[j]) {
            return rec(s, t, i + 1, j + 1);
        }
        return rec(s, t, i, j + 1);
    }
    bool isSubsequence(string s, string t) {
        // two-pointer-solution
        //  int i=0;
        //  int j=0;

        // while(i<s.size() && j<t.size()){
        //     if(s[i]==t[j]){
        //         i++;
        //     }
        //     j++;
        // }

        // return i==s.size();

        // using-recursion

        // return rec(s, t, 0, 0);
    }
};