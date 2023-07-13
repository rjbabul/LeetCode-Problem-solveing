class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ch[26];
        memset(ch, 0, sizeof(ch));
        for(int i=0;i<ransomNote.length();i++)
        {
            ch[ransomNote[i]-'a']++;
        }
         for(int i=0;i<magazine.length();i++)
        {
            ch[magazine[i]-'a']--;
        }
        int ans=1;
        for(int i=0;i<26;i++) {
            ans= ans& ch[i]<=0;
        }
        return ans==1;
    }
};
