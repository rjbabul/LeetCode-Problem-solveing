
class Solution {
public:
    int mx(int a, int b){
        if (a>b)return a;
        return b;
    }
    int longestPalindrome(string s) {
        int a[70];
        int mx =0;
        int ans=0;
        memset(a, 0,sizeof(a));

        for(int i=0;i<s.length();i++){

           if(s[i]>='a' && s[i]<='z') a[s[i]-'a']++;
            else a[ s[i] + 32 -'a' + 26]++;
        }

        for(int i=0;i<70;i++){

            if(a[i]%2==0) ans+=a[i];
            else {
                mx=1;
                ans+= a[i]-1;
            }
        }

        return mx+ans;
    }
};
