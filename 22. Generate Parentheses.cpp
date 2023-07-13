class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string str;
        queue<string> q;

        int op, cl;
        vector<string > st;

        q.push("(");
        while(!q.empty()){
            str= q.front();

            q.pop();

            op=cl=0;
            for(int i=0;i<str.length();i++){
                if(str[i]=='(') op++;
                else cl++;
            }
            if(op<n) q.push(str+'(');
            if(cl<op)q.push(str+')');
            if(op==cl && op == n) st.push_back(str);
        }
        return st;

    }
};
