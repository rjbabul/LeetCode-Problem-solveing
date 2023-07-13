
class Solution {
public:
   int fact(int n )
   {
       int temp =1;
       for(int i=0;i<n-1;i++)
       {
           temp*=(9-i);
       }
       return temp ;
   }
    int countNumbersWithUniqueDigits(int n) {
         int ans =1;
         for(int i =1; i<=n;i++)
         {
             ans += 9*fact(i);
         }
         return ans ;
    }
};
