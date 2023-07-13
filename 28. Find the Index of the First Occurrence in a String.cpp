
class Solution {
public:
    int strStr(string str, string st) {
        int n=str.length();
        int m= st.length();
        if(n<m)return -1;
        if(n==0 || m==0) return 0;
        int ans =-1;
        for(int i=0;i<n-m+1;i++){
            if(str[i]== st[0] && str[i+m-1]==st[m-1]){
                //cout<<str[i]<<endl;
                if(str.substr(i, m)== st) return i;
            }
        }
        return ans;
    }
};
