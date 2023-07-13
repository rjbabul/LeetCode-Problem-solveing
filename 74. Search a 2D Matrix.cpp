
class Solution {
public:
    bool binary_search(vector<vector<int>> & matrix, int col, int l, int r, int x){
        if(l<r){
            int mid = (l+r)/2;
            if(matrix[col][mid]==x)return true;
            else if(matrix[col][mid]<x) return binary_search(matrix, col,mid+1,r,x);
            else return binary_search(matrix, col, l, mid, x);
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n,m;
         bool flag;
        n= matrix.size();
        for(int i=0;i<n;i++){
            m= matrix[i].size();
            if(target>= matrix[i][0] && target<= matrix[i][m-1])
                flag = binary_search(matrix,i,0,m,target);
        }
        return flag;
    }
};
