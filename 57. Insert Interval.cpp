
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector< vector< int > > vt;
        vector<int > temp;
        for(int i=0;i<intervals.size();i++)
        {
            temp.clear();
            if(  intervals[i][1]< newInterval[0])
            {
                vt.push_back(intervals[i]);

                continue;
            }
            else if(intervals[i][0]> newInterval[1])
            {
                vt.push_back(newInterval);
                newInterval.clear();
                 while(i<intervals.size())
                    {
                        vt.push_back(intervals[i]);
                        i++;
                    }
            }
            else{

                temp.push_back(min(intervals[i][0], newInterval[0]));
                if(intervals[i][1]>newInterval[1])
                {
                    temp.push_back(intervals[i][1]);
                    vt.push_back(temp);
                    i++;
                    newInterval.clear();

                    while(i<intervals.size())
                    {
                        vt.push_back(intervals[i]);
                        i++;
                    }
                }
                if(newInterval.size()==0) break;
                while(i+1<intervals.size() && intervals[i+1][0]<=newInterval[1])i++;
                temp.push_back(max(intervals[i][1], newInterval[1]));
                vt.push_back(temp);
                i++;
                 while(i<intervals.size())
                    {
                        vt.push_back(intervals[i]);
                        i++;
                    }
                    newInterval.clear();
            }

        }
        if(newInterval.size()>0) vt.push_back(newInterval);
        return vt;
    }
};
