class MinStack {
private:
    vector<pair<int,int> > stack;

public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        if(stack.empty()){
            stack.push_back(make_pair(x,x));
        }
        else{
            pair<int,int> data= make_pair(x,std::min(x,stack.back().second));
            stack.push_back(data);
        }

    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
