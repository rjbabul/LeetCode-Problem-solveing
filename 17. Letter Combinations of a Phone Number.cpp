
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string > vt;
        if(digits.length()==0)return vt;
        string  str[10];
        str[0]+=".";
        digits+='1';
        digits+='1';
        digits+='1';
        str[1]+=  ".";
        str[2]+="abc";
        str[3]+="def";
        str[4] +="ghi";str[5]+="jkl";str[6]+="mno";
        str[7]+="pqrs"; str[8]+="tuv";str[9]+="wxyz";
        int jj=0;

        for(int i=0;i<str[digits[0]-'0'].size();i++){
            for(int j=0;j<str[digits[1]-'0'].size();j++){
                for(int k=0;k<str[digits[2]-'0'].size();k++){
                    for(int l=0;l<str[digits[3]-'0'].size();l++){
                        string stl;
                        // cout<<str[digits[0]-'0'][i]<<" ";
                         if(str[digits[0]-'0'][i] != '.')
                             stl += str[digits[0]-'0'][i];
                         if(str[digits[1]-'0'][j]!='.')
                             stl += str[digits[1]-'0'][j];
                         if(str[digits[2]-'0'][k]!='.')
                                 stl += str[digits[2]-'0'][k];
                        if(str[digits[3]-'0'][l]!='.')
                            stl += str[digits[3]-'0'][l];
                        vt.push_back(stl);
                        stl.clear();
                    }
                }
            }
        }

        return vt;
    }
};
