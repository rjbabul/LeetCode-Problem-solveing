
class Solution {
public:
    string multiply(string num1, string num2) {
        int p;
        string str;
        int n , m;
        n=num1.length();
        m= num2.length();

        for(int i=n-1,k=0;i>=0;i--,k++){
            p=0;
            int r;
            for(int j=m-1,l=0;j>=0;j--,l++){
                 r=(p+ (num1[i]-'0')*(num2[j]-'0'));

                 if(l+k<str.length()) {

                      r+= (str[l+k]-'0');
                      str[l+k]=(char) (r%10 + '0');
                      p= r/10;

                     }
                else{

                    str+=(char) (r%10+'0');

                    p=r/10;
                }

            }
            while(p){

                str+=(char) (p%10)+'0';
                p/=10;
            }
          //  cout<<str<<endl;
        }
        while(p){
                str+=(char) (p%10)+'0';
                p/=10;
            }
        int sum =0;
        reverse(str.begin(), str.end());
         for(int i=0;i<str.length();i++)sum+= (str[i]-'0');
        if(sum>0)
        return str;
        else return "0";
    }
};
