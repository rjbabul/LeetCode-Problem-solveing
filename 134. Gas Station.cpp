
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasc=0, costs=0,n;
        n= gas.size();
        int pos=0, mx=0,ans=0;

        for(int i=0;i<n;i++){
            gasc+=gas[i];
            costs+=cost[i];
            ans+=(gas[i]-cost[i]);
            if(ans<0){
                pos=i+1;
                ans=0;
            }
        }


        if(costs>gasc)return -1;
        else
        return pos;
    }
};
