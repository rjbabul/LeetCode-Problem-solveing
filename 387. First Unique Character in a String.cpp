
class Solution {
public:
    int firstUniqChar(string s) {
        int mp[100005];
        memset(mp,0,sizeof(mp));
        int p=-1,x;
        for(int i=s.length()-1; i>=0;i--){
            x= s[i]-'a';

            mp[x]++;
        }

         for(int  i=0;i<s.length();i++){
            x= s[i]-'a';
            if(mp[x]==1) return i;
        }

          return -1;

    }
};
