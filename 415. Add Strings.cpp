
class Solution {
public:
    string addStrings(string num1, string num2) {
        int  n= num1.length();
        int m = num2.length();
        int sum = 0,p=0;
        string str;
        int i , j;
        for(   i=n-1,j=m-1; i>=0 && j>=0 ; i-- , j--){
            str+= (char)((p+ (num1[i]-'0')+(num2[j]-'0'))%10 +'0');
            p = (p+ (num1[i]-'0')+(num2[j]-'0'))/10 ;
        }
        while(i>=0 ){
            str+= (char)((p+ (num1[i]-'0' ))%10 +'0');
            p = (p+ (num1[i]-'0') )/10 ;
            i--;
        }
          while(j>=0 ){
            str+= (char)((p+ (num2[j]-'0' ))%10 +'0');
            p = (p+ (num2[j]-'0') )/10 ;
            j--;
        }

        if(p>0) str+=(char)(p+'0');
        reverse(str.begin(), str.end());

        return str;
    }
};
