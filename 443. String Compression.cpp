
class Solution {
public:
    int compress(vector<char>& chars) {

        queue< pair<char, int> > q;
        int cnt=1;
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]==chars[i-1])
            {
                cnt++;
            }
            else
            {
                q.push({chars[i-1], cnt});
                cnt=1;
            }
        }
        q.push({chars[chars.size()-1], cnt});

        vector<char> ans;

        while(!q.empty())
        {
            char x= q.front().first;
            int n = q.front().second;
            q.pop();

            if(n==1) ans.push_back(x);
            else
            {
                ans.push_back(x);
                vector<int>st;

                while(n)
                {
                    st.push_back(n%10);
                    n/=10;
                }
                reverse(st.begin(), st.end());
                for(auto c: st)
                {
                    ans.push_back((char)(c+48));
                    cout<<c<<" ";
                }
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            chars[i]=ans[i];
        }

        return ans.size();
    }
};
