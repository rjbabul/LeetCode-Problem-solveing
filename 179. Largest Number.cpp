
class Solution {
public:
    string tostring(int n){
        string str;
        while(n){
            str+= (char)(n%10+'0');
            n/=10;
        }
        reverse(str.begin(), str.end());
        return str;
    }
    static bool compare(int a, int b){
        string str = to_string(a);
        string st= to_string(b);
        return str+st>st+str;
    }
    string largestNumber(vector<int>& num) {
         string str;
      sort(num.begin(), num.end(), compare);
      for(int i=0;i<num.size();i++){

          str+= to_string(num[i]);
      }
        if(str[0]=='0') return "0";
      return str;

    }
};
