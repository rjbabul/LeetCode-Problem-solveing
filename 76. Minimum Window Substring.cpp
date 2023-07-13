
class Solution {
public:
    string minWindow(string s, string t) {
        int n= t.length();
        map< char, int > mpst,mpt;
        for(int i=0;i<n;i++) mpt[t[i]]++;

        int mn= INT_MAX;
        int temp=0;string str;
        str= "";
        for(int i=0,l=0;i<s.length();i++){
            if(mpt[s[i]]==0)continue;
            if(mpst[s[i]]<mpt[s[i]])temp++;
            mpst[s[i]]++;
            while(temp==n && l<i){
                if(mpt[s[l]]==0){
                    l++;
                    continue;
                }
                if(mpst[s[l]]>mpt[s[l]]) {
                    mpst[s[l]]--;
                    l++;
                }
                else break;

            }

            if( temp==n && i-l+1<mn){
                  //cout<<temp<<" "<<n<<" "<<i-l+1<<" "<<mn<<endl;
                str= s.substr(l, i-l+1);
                mn= i-l+1;
            }
        }
        //cout<<str<<endl;
        return str;
    }
};
