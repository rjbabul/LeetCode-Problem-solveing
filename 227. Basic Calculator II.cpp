class Solution {
public:
    int num(string str){
        int ans=0;
        for(int i=0;i<str.length();i++){
            ans= (ans*10)+ (str[i]-'0');
        }

        return ans;
    }
    string str_cam(int sum){
        string str;
        while(sum){
            str+=(char)(sum%10+48);
            sum/=10;
        }
        reverse(str.begin(), str.end());
        return str;
    }


    int calculate(string s) {
        queue<string > st;
        string str;
        for(int i=0; i<s.length();)
            {
                while(i<s.length() && s[i]==' ')i++;
            if(i<s.length() && (s[i]=='-' || s[i]=='+' || s[i]=='*' || s[i]=='/'))
                {
                    str.clear();
                    str+= s[i];
                    st.push(str);
                    i++;
                    str.clear();
                }
                while(i<s.length() && s[i]==' ')i++;

                while(i<s.length() && s[i]>='0' && s[i]<='9')str+= s[i++];

                if(str.length()>0){
                    st.push(str);
                    str.clear();
                }

            }
            if(str.length()>0) st.push(str);

       stack<string > ans ;
        while(!st.empty()){
         str= st.front();

          st.pop();
          if(str=="*")
          {
              int n = num(ans.top()) * num(st.front());
              ans.pop();
              st.pop();
              str=str_cam(n);
          }
          if(str=="/")
          {
              int n = num(ans.top()) / num(st.front());
              ans.pop();
              st.pop();
              str=str_cam(n);
          }

           ans.push(str);
        }

       int add =0, sub = 0;
        while(!ans.empty())
        {
            str= ans.top();
            ans.pop();
            if(!ans.empty() && ans.top()=="+")
            {
                add+= num(str);
                str.clear();
                ans.pop();
            }

             if(!ans.empty() && ans.top()=="-")
            {
                sub+= num(str);
                str.clear();
                ans.pop();
            }
        }
       if(str.length()>0 ) add+= num(str);

        return add-sub;
    }
};


/*

// O(N) time O(1) space
int calculate(string s) {
        stringstream ss("+" + s);
        char op;
        int n, last, ans = 0;
        while (ss >> op >> n) {
            if (op == '+' || op == '-') {
                n = op == '+' ? n : -n;
                ans += n;
            } else {
                n = op == '*' ? last * n : last / n;
                ans = ans - last + n; // simulate a stack by recovering last values
            }
            last = n;
        }
        return ans;
}

*/
