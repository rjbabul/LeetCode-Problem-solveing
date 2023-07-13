class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum =0, maxSum =INT_MIN, CurrMax=0, minSum = INT_MAX, CurrMin=0;

        for(auto x: nums)
        {
            totalSum+= x;
            CurrMax = max(CurrMax+x, x);
            maxSum = max(maxSum, CurrMax);

            CurrMin= min(CurrMin+x, x);
            minSum = min(minSum, CurrMin);
        }
        return CurrMax>0? max(maxSum,totalSum - minSum):maxSum;
    }
};
