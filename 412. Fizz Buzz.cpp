class Solution
{
public:
    string tostring (int n)
    {
        string str;
        while(n)
        {
            str+=(n%10)+'0';
            n/=10;
        }
        reverse(str.begin(), str.end());
        return str;
    }
    vector<string> fizzBuzz(int n)
    {
        vector<string> vt;

        for(int i=1; i<=n; i++)
        {
            if(i%15==0)
                vt.push_back("FizzBuzz");
            else if(i%3==0)
                vt.push_back("Fizz");
            else if(i%5==0)
                vt.push_back("Buzz");

            else
                vt.push_back(tostring(i));
        }
        return vt;
    }
};
