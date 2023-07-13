
class Solution {
public:
    int minLength(string s) {
        stack<char> q;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B')
            {
                if(!q.empty() && q.top()=='A') q.pop();
                else q.push(s[i]);
            }
            else if(s[i]=='D')
            {
                if(!q.empty() && q.top()=='C') q.pop();
                else q.push(s[i]);
            }
            else q.push(s[i]);
        }

        return q.size();
    }
};
