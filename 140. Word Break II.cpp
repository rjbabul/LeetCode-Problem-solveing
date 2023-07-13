
class Solution {
public:

    void helper(vector< pair<int , string > > vt[], int head, string str, vector<string > & st){

        if(head==0){
            stack<string>q;
            string s;

            for(int i=0;i<str.length();i++){
               if(str[i]>='a' && str[i]<='z')s+=str[i];
                else {

                    q.push(s);
                    s.clear();
                }
            }
                s=q.top();
               q.pop();
                while(!q.empty()){s+=' ';
                    s+= q.top();

                    q.pop();
                }

                st.push_back(s);
                s.clear();

            return ;
        }
        for(int i=0;i<vt[head].size();i++){
            helper(vt,vt[head][i].first, str+vt[head][i].second+' ',st);
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {

        int n= s.length();
        vector< pair<int , string > > vt[n+1];
        int dp[n+1];
        memset(dp , 0, sizeof(dp));
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            string str= s.substr(i,n-i);

            for(string x: wordDict){
                if(x== str.substr(0, x.length()) && dp[i+x.length()]){
                    dp[i]=1;
                    vt[i+x.length()].push_back(make_pair(i, x));
                }
            }
        }
         vector<string> st;
        helper(vt, n, "", st);

        return st;
    }
};
