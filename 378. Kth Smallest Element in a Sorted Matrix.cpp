
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> vt;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
                vt.push_back(matrix[i][j]);
        }
        sort(vt.begin(), vt.end());

        return vt[k-1];
    }
};
