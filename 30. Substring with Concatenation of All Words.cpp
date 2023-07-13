
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int wsize= words[0].size();
        int lsize= words.size();
        int windows= wsize * lsize;

        map< string , int > mp;
        for(auto x : words) mp[x]++;
        vector<int> ans;
        for(int i =0; i< s.size()- windows+1; i++)
        {
            bool flag= true;
            map<string , int> seen;

            for(int j =0;j<lsize;j++)
            {
                string t = s.substr(i+j*wsize, wsize);
                seen[t]++;

                if(seen[t]>mp[t])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
