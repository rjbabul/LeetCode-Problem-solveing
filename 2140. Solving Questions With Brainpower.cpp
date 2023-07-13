
class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        long long int mem[n+1];
        memset(mem, 0, sizeof(mem));

        mem[1]= questions[0][0];
        for(int i=1;i<=n;i++)
        {
            mem[i]= mem[i-1]+ questions[i-1][0];
        }
        long long int res[n+1];
        memset(res, 0, sizeof(res));
        long long int mx =0;

        for(int i=n;i>0;i--)
        {
           res[i]= mem[i]- mem[i-1];
           if(questions[i-1][1]+1+i<=n) res[i]+= (res[questions[i-1][1]+i+1]);
           mx=max(mx, res[i]);
           res[i]= mx;
        }

        return mx;
    }
};
