class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;


        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }

        return t.size()-j;

        
    }
};