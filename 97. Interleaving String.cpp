class Solution {
public:
int dp[200][200];
bool helper(string s1, int l1, string s2, int l2, string s3, int l3)
{
    if(dp[l1][l2]!=-1) return dp[l1][l2];
    if(s3.length()==l3 && (s1.length()==l1 && s2.length()==l2)) return true;
    else if(s3.length()==l3 && (s1.length()!=l1 || s2.length()!=l2)) return false;
    else if(s3.length()!=l3 && (s1.length()==l1 && s2.length()==l2)) return false;
    else if(s3[l3]!= s2[l2] && s3[l3]!= s1[l1]) return false;

    else if(s3[l3]!= s2[l2] && s3[l3]== s1[l1]) return helper(s1,l1+1, s2,l2, s3, l3+1);
    else if(s3[l3]== s2[l2] && s3[l3]!= s1[l1]) return helper(s1,l1, s2,l2+1, s3, l3+1);
    else   return dp[l1][l2]= helper(s1,l1+1, s2,l2, s3, l3+1) | helper(s1,l1, s2,l2+1, s3, l3+1);

}
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp, -1, sizeof(dp));
        bool flag= helper(s1,0, s2,0, s3,0);
        return flag;
    }
};
