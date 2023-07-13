class Solution {
public:
    long long int max(long long int a, long long int b){
        if(a>b)return a;
        else return b;
    }

     long long int min(long long int a, long long int b){
        if(a>b)return b;
        else return a;
    }

   long long  int maxArea(vector< int>& height) {
       long long int l=1, r= height.size();
        long long int mx = 0;
        while(l<r){
            mx= max(mx, min(height[l-1],height[r-1])*(r-l));
            if(height[l-1]<height[r-1])l++;
            else r--;
        }
        return mx;
    }
};
