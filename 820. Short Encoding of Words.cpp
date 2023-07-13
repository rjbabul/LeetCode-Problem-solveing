
class Solution {
public:
   static bool compare(string &str, string &st){

        return str.size()<st.size();
    }

    int minimumLengthEncoding(vector<string>& words) {
        string str;
        sort(words.begin(), words.end(),compare);


        if(words.size()==1) return words[0].length()+1;

        map<string , int > mp;
        for(int i=0;i<words.size();i++)mp[words[i]]++;
        int ans=0;
        for(int i=words.size()-1;i>=0;i--){
            int n= words[i].length();
           if(mp[words[i]]>0) ans+= words[i].length()+1,str+= words[i]+'#';
            for(int j=0;j<n;j++){
                mp[words[i].substr(j,n-j)]=0;
            }
        }
       // cout<<str;
      return ans;
    }
};
