
class Solution {
public:

    int titleToNumber(string str) {
        int n= str.length();
       int ans=0,d;
        for(int i=0;i<n;i++){
            d= str[i]-'A'+1;
            ans= ans*26+d;
        }

        return ans;


    }
};
