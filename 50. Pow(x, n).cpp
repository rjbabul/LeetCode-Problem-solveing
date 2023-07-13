class Solution {
public:
    double myPow(double x, int n) {
         long long int nn;
        nn=n;
        if(n<0) nn= -1*nn;

        double  ans=1.0,s=0.0000;
        while(nn>0){

            if(nn%2==1){
               ans*=x;

            }
                x=x*x;

                nn/=2;
        }


        if(n>=0)
         return ans;
        else return 1.0/ans;
    }
};
