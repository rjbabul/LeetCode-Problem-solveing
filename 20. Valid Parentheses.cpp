class Solution {
public:
    bool isValid(string s) {
        int f,ss,t;
        f=ss=t=0;
        stack<char> st;

        if(s.length()%2!=0)return false;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('  ) st.push(s[i]);
          else  if(s[i]=='{'  ) st.push(s[i]);

          else  if(s[i]=='['  ) st.push(s[i]);


         else if(s[i]==')'){
             if(st.empty()) return false;
             if(st.top()=='(') st.pop();
             else return false;
         }
       else if(s[i]=='}'){
            if(st.empty()) return false;
             if(st.top()=='{') st.pop();
             else return false;
       }
             else if(s[i]==']'){
                 if(st.empty()) return false;
             if(st.top()=='[') st.pop();
             else return false;
       }
        }
        if(!st.empty()) return false;
        else return true;

     }

};
