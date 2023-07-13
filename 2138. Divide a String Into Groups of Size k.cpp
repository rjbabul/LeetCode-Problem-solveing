
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n  = ((s.length()-1)/k +1)*k;
        for(int i = k; s.length()<n;i++)
        {
            s+= fill;
        }
        vector<string > vt;
        string str ="";
        for(int i=0;i<n ; i++)
        {
            str+= s[i];

            if(str.length()==k)
            {
                vt.push_back(str);
                str="";
            }
        }
        return vt;
    }
};
