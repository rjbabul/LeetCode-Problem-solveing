class Solution {
public:
    int reverse(int x) {



       long long int p=0;
        while(x){
            p=(p*10+(long long int )x%10);
            x/=10;
        }
        if(p>=2147483642)return 0;
        if(p<-2147483641) return 0;
        else return (int)p;
    }
};
