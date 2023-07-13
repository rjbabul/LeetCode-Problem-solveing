
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        vector<string > vt(numRows,"");

        int j=0;
        for(int i=0;i<s.length();){
            while(j<numRows && i<s.length()){
                vt[j].push_back(s[i]);
                i++,j++;
            }
            j-=2;
            while(j>0 && i<s.length()){
                vt[j].push_back(s[i]);
                i++,j--;
            }
        }
       s.clear();
        for(auto x:vt) s += x;
         return s;

    }
};
