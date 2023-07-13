
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int x, y,c=0,crnt=-500000;
        for(int i=0;i<intervals.size();i++)
        {
           //  cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;



            if(crnt<=intervals[i][0]) {
                x=intervals[i][0];
                y=intervals[i][1];
                crnt=intervals[i][1];
            }
            else{
                c++;
                if(intervals[i][0]>=x && intervals[i][1]<crnt){
                    x=intervals[i][0];
                    y=intervals[i][1];
                    crnt=intervals[i][1];

                }
            }
        }


        return c;
    }
};
