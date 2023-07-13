class Solution {
public:
    bool isIsomorphic(string s, string t) {

        const int n= s.length();
        int a[256],b[256];
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for(int i=0;i<n;i++)
        {
            if(s[i]==t[i] && ( a[s[i]] == 0 || a[s[i]] == t[i]) && (b[t[i]]==0 ||  b[t[i]]== s[i]))
            {

                a[s[i]] = t[i];
                b[t[i]]= s[i];

            }
            else if(a[s[i]]==0  && b[t[i]]==0 )
            {
                 a[s[i]] = t[i];
                 b[t[i]]= s[i];
            }
            else if(a[s[i]]==t[i]  )
                continue;
            else
                return false;
        }
        return true;
    }
};
