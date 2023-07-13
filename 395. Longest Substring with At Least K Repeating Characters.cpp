
class Solution {
public:
  int helper(string s, int k )
  {
      map<char, int > mp ;
      for(int i=0;i<s.length(); i++) mp[s[i]]++;

      int index =0;
      while(index<s.length() && mp[s[index]]>=k) index++;

      if(index== s.length()) return index;

      int l = helper(s.substr(0, index), k);
      int r= helper(s.substr(index+1), k);
      return max(l,r);
  }
    int longestSubstring(string s, int k) {
        if(k==0) return s.length();
        if(s.length()<k) return 0;
        return helper(s, k);
    }
};
