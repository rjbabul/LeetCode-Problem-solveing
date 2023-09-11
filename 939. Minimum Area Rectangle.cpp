class Solution {
public:

    int minAreaRect(vector<vector<int>>& points) {
        map<pair<int, int>,int > mp ;
        sort(points.begin(), points.end());
        for(auto x:points)
        {
            mp[{x[0], x[1]}]++;
        }
        int sum = INT_MAX;

        for(int i = 0 ; i<points.size()-1;i++)
        {
            for(int j = i+1; j<points.size(); j++)
            {
                if(!((points[i][0]==points[j][0]) || (points[i][1]==points[j][1])) )
                {
                    if(mp[{points[j][0],points[i][1]}]>0 && mp[{points[i][0],points[j][1]}]>0)
                    {
                        int tempSum =abs(points[j][0]-points[i][0])* abs(points[j][1]-points[i][1]);
                        sum = sum>tempSum?tempSum:sum;
                    }
                }
            }
        }
        return sum==INT_MAX?0:sum;
    }
};
