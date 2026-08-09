class Solution {
public:
    bool isPalindrome(string s) {
        string m;
        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c))) {
                m.push_back(c);
            }
        }
        for (char &c : m) {
            c = tolower(static_cast<unsigned char>(c));
        }
        string j;
        j=m;
        reverse(m.begin(),m.end());
        if(m==j){
            return true;
        }
        return false;
    }
};