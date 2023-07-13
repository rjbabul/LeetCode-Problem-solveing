
class Solution {
public:
    typedef pair<int, int > pi;
    int max(int a, int b){
        if(a>b)return a; return b;
    }
    int min(int a, int b){
        if(a>b)return b; return a;
    }

    vector<int> partitionLabels(string s) {
        int l[28], r[28];
        memset(l, -1, sizeof(l));
        memset(r, -1, sizeof(r));
        int n=s.length();

        for(int i=0; i<n; i++)if(l[s[i]-'a']==-1) l[s[i]-'a']=i;
        for(int i=n-1;i>=0;i--) if(r[s[i]-'a']==-1) r[s[i]-'a']=i;

        vector<int > vt;

        priority_queue< pi , vector<pi> , greater<pi> > q;

        for(int i=0;i<27;i++){
            if(l[i]>=0) q.push(make_pair(l[i], r[i]));


        }

        int a, b, x, y;

        while(!q.empty()){

            a=q.top().first;
            b= q.top().second;

            q.pop();
            if(!q.empty() && q.top().first>=a && q.top().first<=b){
                x=q.top().first;
                y=q.top().second;
                q.pop();
                x= min(a, x);
                y=max(b,y);
                q.push(make_pair(x,y));
            }
            else{

                vt.push_back(b-a+1);
                a=-1; b=-1;
            }
        }


        if(a>=0) {
             cout<<a<<" "<<b<<endl;
                vt.push_back(b-a+1);
        }

        return vt;

    }
};
