
class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string str;
        int n=0 ,i;
        for( i=0;i<b.length() && i<a.length();i++)
        {
            n+= (a[i]-'0')+ (b[i]-'0');
            str+= (char)(n%2 + '0');
            n= n/2;
        }
        while(i<a.length())
        {
            n+= (a[i]-'0') ;
            str+= (char)(n%2 + '0');
            n= n/2;
            i++;
        }
        while(i<b.length())
        {
            n+= (b[i]-'0') ;
            str+= (char)(n%2 + '0');
            n= n/2;
            i++;
        }
        while(n)
        {
             str+= (char)(n%2 + '0');
             n= n/2;
        }
        reverse(str.begin(), str.end());

        return str;
    }
};
