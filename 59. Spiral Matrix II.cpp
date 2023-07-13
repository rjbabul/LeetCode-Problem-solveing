
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int a[51][51];
        int ans =1;
        memset(a,0,sizeof(a));
        for(int i=1,j=1;ans<=n*n; i++,j++){

            while(j<=n && a[i][j]==0){a[i][j]=ans++; j++;}
            j--;
            i++;

            while(i<=n && a[i][j]==0) {
                a[i][j]=ans++;i++;
            }
            j--;
            i--;

            while(j>=1 && a[i][j]==0){
                a[i][j]=ans++; j--;
            }
            j++;
            i--;


            while(i>=1 && a[i][j]==0){
                a[i][j]=ans++;i--;
            }

        }
        vector< vector<int > > vt(n);

        for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++) {vt[i-1].push_back(a[i][j]); }

        }

        return vt;
    }
};
