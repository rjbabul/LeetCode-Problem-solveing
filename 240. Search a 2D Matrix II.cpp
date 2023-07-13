
class Solution {
public:


    bool searchMatrix(vector<vector<int>>& matrix, int target) {

         int n = matrix.size();
         int m = matrix[0].size();

        for(int i=0;i<n;i++){
           for (auto x: matrix[i]) if(x==target)return true;
        }
        return false;
    }
};
