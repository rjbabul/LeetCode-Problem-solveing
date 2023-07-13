
class Solution {
public:
    int max(int a, int b){
        if(a>b)return a;
        else return b;
    }
    int lengthOfLongestSubstring(string s) {

        int mx =0,c=0;
        list<char>lst;
        map<char, int > mp;
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==0){
                lst.push_back(s[i]);
                mp[s[i]]++;
            }
            else{

                mx= max(mx , lst.size() );

                lst.push_back(s[i]);
                c=1;
                while(lst.front()!=s[i]){
                    mp[lst.front()]--;
                    lst.pop_front();}
                lst.pop_front();

            }
        }

        mx= max(mx,lst.size());
        return mx;
    }
};
