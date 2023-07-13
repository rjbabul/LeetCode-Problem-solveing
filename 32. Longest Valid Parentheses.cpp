
class Solution {
public:
    int longestValidParentheses(string s) {
        stack< pair<int, int > > st;
        int n= s.length();
        int index[n+1];

        memset(index, -1, sizeof(index));

        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(make_pair(s[i],i));

            else if(!st.empty()){
               int x= st.top().second;
                index[x]=i;
                index[i]=x;

                st.pop();
            }

        }
        int sum =0;
        int mx=0;
        for(int i=0;i<n;i++){
           // cout<<ans[i]<<" ";
            if(index[i]<0)
            sum=0;
            else {
                i= index[i];
                int x= (i-index[i]+1);
                sum+= x;
            }
            mx= max(mx, sum);
        }
        mx=max(mx,sum);
        return mx;
    }
};
