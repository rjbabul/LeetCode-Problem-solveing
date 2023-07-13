
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string str;

        map<string , int > mp;
        map<char, int > m;
        int c=0;
        bool flag=true;
        int j=0;
        for(int i=0;i<s.length(); i++)
        {
            if(s[i]!=' ')str+= s[i];
            else{
                c++;
                if(mp[str]==0 && m[pattern[j]]==0){
                    mp[str]= pattern[j];
                    m[pattern[j]]++;
                    j++;
                }
                else if(mp[str]==0 && m[pattern[j]]>0){
                    flag=false;
                    break;
                }
                else if(mp[str]==pattern[j])j++;
                else{
                    flag=false;
                    break;
                }
                str.clear();

            }
        }
        c++;
        if(flag)
       {
            //cout<<mp[str]<<" "<<str;
            if(mp[str]==0 && m[pattern[j]]==0){
                    mp[str]= pattern[j];

                    j++;
                }
            else if(mp[str]==0 && m[pattern[j]]>0)flag=false;
                else if(mp[str]==pattern[j])j++;
                else{
                    flag=false;

                }}

        return flag & c==pattern.length();
    }
};
