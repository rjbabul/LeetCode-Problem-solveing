
class Solution {
public:
    vector<vector<int>> generate(int n) {


        vector< vector< int> > st;

        for(int i=0;i<n;i++){
            vector<int> vt;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) vt.push_back(1);
                else {
                    vt.push_back(st[i-1][j-1]+ st[i-1][j]);
                }

            }

             st.push_back(vt);
        }
        return st;
    }
};
