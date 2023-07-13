class Solution {
public:
    bool isPowerOfTwo(int n) {

        while(n%2==0 && n)
        {
            n/=2;
        }
        if(n!=1)return false;
        return true;
    }
};
