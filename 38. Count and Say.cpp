
class Solution {
public:
    string countAndSay(int n) {
        int cont =2;
        string str, st;
        str="1";

        for(; cont<=n;cont++){

            st.clear();
            int m=1;
            stack<char>s;

            for(int i=0;i<str.length()-1;i++){
                if(str[i]==str[i+1])m++;
                else{
                    while(m){
                        s.push(m%10 + 48);
                        m/=10;
                    }

                    while(!s.empty()){
                        st+= s.top();
                        s.pop();
                    }
                    st+=str[i];
                    m=1;
                }


            }
             while(m){
                        s.push(m%10 + 48);
                        m/=10;
                    }

                    while(!s.empty()){
                        st+= s.top();
                        s.pop();
                    }
                    st+=str[str.length()-1];
                    m=1;

                str=st;
        }
        return str;
    }
};
