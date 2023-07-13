
class Solution {
public:
    typedef  int ll ;
    typedef pair<ll, ll > pi;

   int max(int a, int b) {
       if(a>b)return a; return b;
   }
    int min(int a, int b) {
       if(a>b)return b; return a;
   }

    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {

        vector< pi > st;
        priority_queue< pi, vector< pi> , greater< pi> > fl, sl;
       for(int i=0;i<firstList.size();i++)
           fl.push(make_pair(firstList[i][0], firstList[i][1]));

        for(int i=0;i<secondList.size();i++)
          sl.push(make_pair(secondList[i][0],secondList[i][1]));

        ll al,ar,xl,xr;
         while(!fl.empty() && !sl.empty()){
             al= fl.top().first;
             ar = fl.top().second;
             xl=sl.top().first;
             xr=sl.top().second;
             fl.pop();
             sl.pop();
             LOOP:
             while(ar < xl  && !fl.empty()){
                 al= fl.top().first;
                 ar = fl.top().second;
                 fl.pop();
             }
             if(ar<xl && fl.empty())break;
             while(xr< al && !sl.empty()){
                  xl=sl.top().first;
                  xr=sl.top().second;

                  sl.pop();
             }

             if(sl.empty() && xr<al)break;

             if(max(al, xl) <=  min(ar, xr))
               {  st.push_back(make_pair(max(al, xl), min(ar, xr)));
             if(ar>xr){
                fl.push(make_pair(xr,ar));
             }
             else if(xr>ar){
                 sl.push(make_pair(ar,xr));

             }}
             else goto LOOP;
         }

        vector< vector< ll> > vt(st.size());

        for(int i=0; i<st.size();i++){
            vt[i].push_back(st[i].first);
            vt[i].push_back(st[i].second);
        }

        return vt;
    }
};
