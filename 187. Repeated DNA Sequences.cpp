

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string , int > visit, cnt;
        vector<string > vt;
        string str;
        if(s.length()<10)return vt;
        for(int i=0;i<s.length()-9;i++){
            str= s.substr(i,10);
            if(cnt[str]>0 && visit[str]==0){
                vt.push_back(str);
                visit[str]++;
            }
            else cnt[str]++;
        }
        return vt;
    }

};
