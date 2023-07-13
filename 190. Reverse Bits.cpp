class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t bit=1,ans=0,temp=0;
         string str;
        cout<<n<<endl;
         temp =n;
        while(temp){
            str+= (char)(temp%2 +'0');
            temp/=2;
        }
        while(str.length()<32) str+='0';
        for(int i=31;i>=0;i--){
            ans+= (str[i]-'0')*bit;
            bit<<=1;
        }
        return ans;
    }
};
