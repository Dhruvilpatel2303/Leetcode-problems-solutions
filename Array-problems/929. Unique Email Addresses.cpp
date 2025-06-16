class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        unordered_set<string> unique;

        for (string e : emails) {
            string local = e.substr(0, e.find('@'));
            local = local.substr(0, local.find('+'));
            erase(local, '.');
            unique.insert(local + e.substr(e.find('@')));
        }
        return unique.size();

        // unordered_set<string> unique;

        // for(string email : emails){
        //    int i=0;
        //    string local="";

        //    while(i<email.size() && email[i]!='@' && email[i]!='+'){
        //     if (email[i] != '.') {
        //             local += email[i];
        //         }
        //     i++;
        //    }

        //    while(i<email.size() && email[i] !='@'){
        //     i++;
        //    }

        //    string domain=email.substr(i+1);
        //    unique.insert(local + '@' + domain);
        // }
        // return unique.size();
    }
};