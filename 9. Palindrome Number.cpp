
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        long long int n=0 , temp;
        temp= x;
        while(temp)
        {
            n = n *10 + temp%10;
            temp= temp/10;
        }

        if(n==x)return true;

        return false;
    }
};
