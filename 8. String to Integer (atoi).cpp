
class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;

        while(i<n && s[i]==' ')i++;
        int a=1;
        if(s[i]=='-')a=-1,i++;
        else if(s[i]=='+')i++;

        long  int ans=0;

        for( ; i<n;i++){

            if(s[i]>='0' && s[i]<='9')
            ans = ans*10 + (s[i]-'0');
            else break;
            if(a<0 && ans>2147483648)break;
            if(a>0 && ans>2147483647)break;

        }


        if((a*ans)<-2147483648) return -2147483648;
        else if((a*ans)> 2147483647) return 2147483647;
        else return a*ans;
    }
};
