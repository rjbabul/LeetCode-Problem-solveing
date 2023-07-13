
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     vector<int > vt;
        int r=1;
        for(int i=digits.size()-1;i>=0;i--){
            vt.push_back((r+digits[i])%10);
            r= (r+digits[i])/10;
        }
        if(r)vt.push_back(r);
        reverse(vt.begin(), vt.end());

        return vt;
    }
};
