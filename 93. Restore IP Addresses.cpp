class Solution {
public:
   vector<string > vt;
   bool isvalid(string str)
   {
       if(str.length()==1) return true;
       if(str.length()==2 && str[0]!='0') return true;
       if(str[0]!='0' && stoi(str)<256) return true;
       return false;
   }
    void helper(string s, int at, string present,  int dot)
    {
        if(dot == 4)
        {
            if(at == s.length())
            {
                present.pop_back();

                vt.push_back(present);
            }
            return ;
        }

        for(int k=1;k<=3;k++)
        {
            if(at+k<=s.length() && isvalid(s.substr(at, k)))
            {
                helper(s, at+k, present+ s.substr(at, k)+'.', dot+1);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
       vt.clear();
       string str;
       helper(s, 0,str, 0);

       return vt;
    }
};
