
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int index=0;
        int one=0;
        for(auto x:s)
        {
            if(x=='1') one++;
            else{
                index++;
                index =min(index,one);
            }
        }
        return min(one, zero);
    }
};
