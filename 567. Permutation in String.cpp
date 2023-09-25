
class Solution {
public:
    bool isSame(int a[] , int b[])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        int count_s1[27], count_s2[27];
        memset(count_s1, 0 , sizeof(count_s1));
        memset(count_s2, 0 , sizeof(count_s2));
        for(auto x:s1) count_s1[x-'a']++;
        int l =0, r=0;
        while(r<s1.length())
        {
            count_s2[s2[r]-'a']++;
            r++;
        }
         while(r<s2.length())
        {
            if(isSame(count_s1, count_s2))return true;
            count_s2[s2[r]-'a']++;
            count_s2[s2[l]-'a']--;
            l++;
            r++;
        }
        if(isSame(count_s1, count_s2))return true;
         return false;
    }
};
