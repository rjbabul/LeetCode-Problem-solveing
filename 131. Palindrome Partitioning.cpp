
class Solution {
public:
   bool isPalindrom(string str)
   {
       string st= str;
       reverse(str.begin(), str.end());

       return str==st;
   }
    void helper(string s, int at, vector<vector<string> >& st, vector<string> str)
    {
        if(at== s.length())
        {
            st.push_back(str);
            return ;
        }

        for(int i=at;i<s.length();i++)
        {
            if(isPalindrom(s.substr(at, i-at+1)))
            {
                str.push_back(s.substr(at, i-at+1));
                helper(s, i+1, st, str);
                str.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string> > st;
        vector<string> str;

        helper(s, 0, st, str);
        return st;
    }
};
