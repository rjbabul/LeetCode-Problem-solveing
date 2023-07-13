class Solution {
public:
    int temp[100];

    int way(int n)
    {

        if(n==0) return temp[n]= 1;
        if(n<0)return  0;
         if(temp[n])return temp[n];
        else return temp[n]= way(n-1)+ way(n-2);
    }

    int climbStairs(int n) {
        return way(n);
    }
};
