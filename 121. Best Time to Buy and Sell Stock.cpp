
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n = a.size();

        int mn= INT_MAX;
        int mxprof= 0;

        for(int i=0;i<n;i++){
            if(a[i]<mn) mn= a[i];
            else{
                mxprof= max(mxprof,a[i]- mn);
            }
        }
        return mxprof;
    }
};
