class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size()==0)return "";

        int n = str[0].length();
        for(int i=1;i<str.size();i++){
            int j=0;
            int c=0;
            for(; j<n;j++){
                if(str[0][j]!= str[i][j])break;
                c++;
            }
            n=c;
        }
        return str[0].substr(0,n);
    }
};
