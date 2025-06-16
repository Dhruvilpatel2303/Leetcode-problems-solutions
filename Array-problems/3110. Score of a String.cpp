class Solution {
public:
    int scoreOfString(string s) {
        int score=0;

        for(int i=0;i<s.size()-1;i++){
            int test=abs((s[i+1]-'a') - (s[i]-'a'));
            score +=test;
        }
        return score;
        
    }
};