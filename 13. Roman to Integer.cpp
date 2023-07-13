class Solution {
public:
    int romanToInt(string s) {

        map<char, int > mp;
        mp['I']=1;mp['V']=5;mp['X']=10;mp['L']=50;mp['C']=100;mp['D']=500; mp['M']=1000;
        stack<string > st;
        string str;
        for(int i=s.length()-1;i>0;i--){
            if(mp[s[i]]>=mp[s[i-1]])str+=s[i];
            else{
                str+=s[i];
                reverse(str.begin(), str.end());
                st.push(str);
                str.clear();
            }
        }
        str+=s[0];
        reverse(str.begin(), str.end());
        if(str.length()>0)st.push(str);
        str.clear();
        int ans, sum ;
        sum=0;
        ans=0;
        while(!st.empty()){
            str= st.top();

            ans= mp[str[0]];

            for(int i=1;i<str.length();i++){
                if(mp[str[i]]==mp[str[i-1]]) ans+= mp[str[i]];
                else ans= mp[str[i]]-ans;

            }
            sum+=ans;
            st.pop();
        }
        return sum;
    }
};
