
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()<3)return points.size();

        int mx =0, cont =1,x;
        int n= points.size();
        for(int i=0;i<n-1;i++){

            for(int j=i+1; j<n;j++){cont=2;
                for(int k=j+1;k<n;k++){
                    x= (points[k][0]-points[i][0])*(points[i][1]- points[j][1])- (points[i][0]-points[j][0])*(points[k][1]-points[i][1]);
                    if(x==0)cont++;
                    mx=max(mx,cont);
                }
            }
        }
        return mx;
    }
};
