
class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> st1, st2;

        for(int i=0;i<s.length();i++){
            if(s[i]=='#') {if(!st1.empty())st1.pop();}
            else st1.push(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){if(!st2.empty()) st2.pop();}
            else st2.push(t[i]);
        }

        bool flag=true;

        while(!st1.empty() && !st2.empty()){
              if( st1.top()!= st2.top())flag=false;
            st1.pop(); st2.pop();
        }

        if(!st1.empty())flag =false;
        if(!st2.empty())flag=false;
        return flag ;
    }
};
