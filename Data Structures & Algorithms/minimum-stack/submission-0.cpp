class MinStack {
public:
    stack<int> st;
    stack<int>minstack;
    MinStack() {}
    void push(int value) {
        if(minstack.empty()||minstack.top()>=value){
            minstack.push(value);
        }
        st.push(value);
    }

    void pop() {
        if(st.top()==minstack.top()){minstack.pop();}
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minstack.top();
    }
};