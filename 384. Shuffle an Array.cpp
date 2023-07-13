
class Solution {
public:
    vector<int > ans,an;

    Solution(vector<int>& nums) {
        an=nums;
        ans= nums;
    }

    vector<int> reset() {
        return ans;
    }

    vector<int> shuffle() {
        random_shuffle(an.begin(), an.end());
        return an;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
