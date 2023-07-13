class Solution
{
public:

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {

        map<int, int> mp2, mp1;
        int n = nums1.size();
        int m= nums2.size();
        for(int i=0; i<n; i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0; i<m; i++)
        {
            mp2[nums2[i]]++;
        }

        vector<int > vt;
        int freq;
        for(int i=0; i<n; i++)
        {
            freq= min(mp1[nums1[i]], mp2[nums1[i]]);
            mp1[nums1[i]]=0;
            for(int j=0; j<freq; j++)
            {
                vt.push_back(nums1[i]);
            }
        }

    return vt;
}
};
