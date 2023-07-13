class Solution {
public:
    bool judgeCircle(string moves) {
        int c =0, r=0;
       for(auto x:moves)
       {
           if(x=='U') r--;
           else if(x=='D') r++;
           else if(x=='R') c++;
           else c--;
       }
       if(r==0 && c==0) return true;
       else return false;
    }
};
