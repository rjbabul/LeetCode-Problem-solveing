
int primes[5000002];
int cnt_prime[5000002];

class Solution {
public:


    int countPrimes(int n) {
        if(n==0)return 0;

        static int flag=0;
      if(flag==0){

        primes[1]=1; primes[0]=1;
        for(int i=2;i*i<=5000000;i++){
            if(primes[i]==0){
                for(int j=i*2;j<=5000000;j+=i) primes[j]=1;
            }
        }

         cnt_prime[0]=cnt_prime[1]=0;
         for(int i=2;i<=5000000 ;i++){

             cnt_prime[i] = cnt_prime[i-1];
              if(primes[i]==0)
                   cnt_prime[i]+= 1;

        }

           flag++;
      }
        if(primes[n]==0)
        return cnt_prime[n-1];
        else return cnt_prime[n];
    }
};
