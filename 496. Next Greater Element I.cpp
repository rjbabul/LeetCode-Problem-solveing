
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vt;
        map<int, int > mp;
        for(int i=0;i<nums2.size();i++)
        {
           mp[nums2[i]]=i;
        }
          for(int i=0;i<nums1.size();i++)
          {
               bool flag=false;
               for(int j= mp[nums1[i]]+1;j<nums2.size();j++)
               {
                   if(nums1[i]<nums2[j])
                   {
                       vt.push_back(nums2[j]);
                       flag=true;
                       break;
                   }
               }
               if(!flag)vt.push_back(-1);
          }

          return vt;
    }
};
