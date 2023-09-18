

class Solution {
public:
typedef long long int ll;
    int rangeBitwiseAnd(int left, int right) {

        int index =-1;
        for(int i =0; i<31;i++)
        {
             index= (right & (1<<i)) > (left & (1<<i))? i : index;
        }
        while(index>=0)
        {
            right = right & (1<<index)? right ^ ( 1<<index):right;
            index--;
        }
        return right;
    }
};

