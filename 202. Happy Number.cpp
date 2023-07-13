
class Solution {
public:
    bool isHappy(int n) {
        bool a[5000];
        memset(a, false,sizeof(a));
        int sum =0;
        while(sum!=1){
            while(n){
                sum+= (n%10)*(n%10);
                n/=10;
            }
            if(a[sum]==true) break;
            a[sum]=true;
            n=sum;
            sum=0;
        }
        if(sum==1)return true;
        else return false;
    }
};
