
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++)s[i]= tolower(s[i]);
        string str;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='0' && s[i]<='9')) str+= s[i];
        }
        string st;
        st=str;
        reverse(str.begin(), str.end());

        return st==str;
    }
};
