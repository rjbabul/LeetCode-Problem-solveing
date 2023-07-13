
class Solution {
public:
    vector<  int> getRow(int rowIndex) {

        vector<  int> st;
        vector<long long int> vt;
        vt.push_back(1);
        for(long long int i=1;i<rowIndex;i++){
            vt.push_back((int)vt[i-1]*(rowIndex-i+1)/i);
        }

        if(rowIndex>0)
        vt.push_back(1);
      for(int i=0;i<vt.size();i++)st.push_back((int)(vt[i]));
     return st;
    }
};
