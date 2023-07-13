class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> vt;
        vector< vector< int> > st;

        int n= mat.size();
        int  m= mat[0].size();
        int all = n*m;
        if(all != r*c) return mat;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vt.push_back(mat[i][j]);
                if(vt.size()==c)
                {
                    st.push_back(vt);
                    vt.clear();
                }
            }
        }
        return st;
    }
};
