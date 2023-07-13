class Solution {
public:
    int maximum69Number (int num) {
        int rem= 1,pos=1;
        int n= num;
        while(n)
        {
            if((num/rem)%10==6)pos=rem;
            n/=10;
            rem= rem*10;
        }
        return (num/(pos*10)*10+9)*pos+ (num%pos);
    }
};
