class Solution {
public:
    string reverseWords(string s) {
        string str;
        string temp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                temp+= s[i];
            }
            else{
                reverse(temp.begin(), temp.end());
                str+= temp;
                str+=" ";
                temp.clear();
            }
        }
        reverse(temp.begin(), temp.end());
        str+=temp;
        return str;
    }
};
