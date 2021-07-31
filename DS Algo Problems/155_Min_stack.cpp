//155. Min Stack

/*

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2


class MinStack {
public:
    stack<int> final;
    stack<int> mini;
    /** initialize your data structure here. */
    
    
//code:    
    
    MinStack() {
        
    }
    
    void push(int val) {
        final.push(val);
        if(mini.empty()){
            mini.push(final.top());
            return;
        }
        if(final.top()<=mini.top()){
            mini.push(final.top());
        }        
        //cout<<mini[mini.size()-1]<<"\t";
        //cout<<final.top();
    }
    
    void pop() {
        if(final.empty()){
            return;
        }
        if(final.top()==mini.top()){
            mini.pop();
        }
        final.pop();
    }
    
    int top() {
        if(final.empty()){
            return NULL;
        }else{
            return final.top();
        }
    }
    
    int getMin() {
        if(mini.empty())
            return NULL;
        return mini.top();
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
