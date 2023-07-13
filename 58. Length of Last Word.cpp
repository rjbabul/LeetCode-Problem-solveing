class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.length()-1;
        while(n>=0 && s[n]==' ')n--;
        int i=n-1;
        while(i>=0 && s[i]!=' ')i--;
        return n-i;
    }
};
