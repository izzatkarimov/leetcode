class MinStack {
private:
    long min;
    std::stack<long> stack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (stack.empty()) {
            stack.push(0);
            min = val;
        } else {
            stack.push(val - min);
            if (val < min) min = val;
        }
    }
    
    void pop() {
        if (stack.empty()) return;
        
        long pop = stack.top();
        stack.pop();
        
        if (pop < 0) min = min - pop;
    }
    
    int top() {
        long top = stack.top();
        return (top > 0) ? (top + min) : (int)min;
    }
    
    int getMin() {
        return (int)min;
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