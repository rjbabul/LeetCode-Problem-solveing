class Solution {
public:
    int mySqrt(int x) {
        long long int i=1;
        for(i=1;i*i<x;i++)
        {
            if(i*i>=x)break;
        }
        if(i*i>x)i--;
        return i;
    }
};
