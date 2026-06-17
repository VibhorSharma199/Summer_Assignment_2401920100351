class MyQueue {
private:
    stack<int> in_st;
    stack<int> out_st;
    
    void shiftStacks() {
        if (out_st.empty()) {
            while (!in_st.empty()) {
                out_st.push(in_st.top());
                in_st.pop();
            }
        }
    }
public:
    MyQueue() {}
    
    void push(int x) {
        in_st.push(x);
    }
    
    int pop() {
        shiftStacks();
        int val = out_st.top();
        out_st.pop();
        return val;
    }
    
    int peek() {
        shiftStacks();
        return out_st.top();
    }
    
    bool empty() {
        return in_st.empty() && out_st.empty();
    }
};
