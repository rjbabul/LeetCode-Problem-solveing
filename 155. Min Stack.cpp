
class MinStack {
public:
    priority_queue<int, vector<int> , greater<int> > q;
    map<int, int > mp ;
    stack<int> st;
    MinStack() {
         mp.clear();
    }

    void push(int val) {
        mp[val]++;
        q.push(val);
        st.push(val);
    }

    void pop() {
        int n = st.top();
        st.pop();
        mp[n]--;
    }

    int top() {
        return st.top();
    }

    int getMin() {
        int n;

        while(!q.empty())
        {
            n= q.top();
            if(mp[n]>0) break;
            q.pop();
        }

        return n ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
