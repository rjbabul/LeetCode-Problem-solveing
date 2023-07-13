
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n= arr.size();
        int a[10003];
        memset(a, 0, sizeof(a));
        for(auto x:arr) a[x]++;
         int i ,x=0;
        for( i=1;i<arr[n-1];i++)
        {
            x+= (a[i]^1);
            if(x==k) break;
        }
        if(x==k) return i;
        else return i+ (k-x);

    }
};
