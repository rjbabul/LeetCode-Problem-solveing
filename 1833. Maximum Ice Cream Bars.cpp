
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int sum =0;
        int cnt=0;
        for(int i=0;i<costs.size() && sum<coins;i++)
        {
            if(sum+ costs[i]<=coins)
            {
                sum+= costs[i];
                cnt++;
            }
            else break;
        }

        return cnt;
    }
};
