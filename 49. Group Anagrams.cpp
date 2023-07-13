class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        set<string > st;
        int k=1;
        map<string , int > mp;
        vector<string> t[10004];

        for(int i=0;i<strs.size();i++){
            string s= strs[i],l=strs[i];
            sort(s.begin(), s.end());
            st.insert(s);
            if(mp[s]==0)mp[s]=k++;

            cout<<mp[s]<<" "<<l<<" "<<s<<endl;
            t[mp[s]].push_back(l);
        }
        vector<vector<string > > vt(k-1);

        for(int i=1;i<=k;i++){
            for(int j=0;j<t[i].size();j++) vt[i-1].push_back(t[i][j]);
          }

        return vt;
    }
};
