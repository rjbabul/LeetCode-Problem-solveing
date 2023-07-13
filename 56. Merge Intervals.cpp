class Solution {
public:
    typedef pair<int,int > pi;
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector< vector< int > > vt(10004);
        stack<pi> stk;
        int k =0,x,y;
        int mn=intervals[0][0], mx=intervals[0][1];
        for(int i=1 ; i<intervals.size(); i++){
            x= intervals[i][0];
            y= intervals[i][1];
            if(mx<x){
                vt[k].push_back(mn);
                vt[k].push_back(mx);
                mn = x;
                mx= y;

                k++;
            }
            else{
                mx=max(mx,y);
                mn = min(mn,x);
            }
        }
         vt[k].push_back(mn);
                vt[k].push_back(mx);
        k++;
        vector< vector<int > > st(k);
        for(int i=0; i<k ; i++){
            st[i].push_back(vt[i][0]);
            st[i].push_back(vt[i][1]);
        }
        return st;
    }
};
