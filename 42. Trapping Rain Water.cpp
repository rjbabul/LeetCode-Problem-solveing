
class Solution {
public:
    int trap(vector<int>& a) {
        stack< pair< int , int > > q;
        int index=0, h=0, current_h=0, v=0, ans=0;
        for(int i=0; i<a.size()-1;i++){
            if(a[i]>=a[i+1]){
                q.push(make_pair(a[i], i));
            }
            else{
                h= a[i+1];
                current_h= a[i];
                index = i+1;

                while(!q.empty()   && q.top().first<=h){

                    v+= (q.top().first -current_h)*(index - q.top().second-1);
                    current_h = q.top().first;
                    q.pop();

                }
                if(!q.empty()) {
                    v+= (h -current_h)*(index - q.top().second-1);
                   // q.top().first = h;
                }
                cout<<v<<" ";
                ans+= v;
                v=0;
            }
        }
     return ans;
    }
};
