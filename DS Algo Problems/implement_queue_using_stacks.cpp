/*Implement Queue using Stacks
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:

void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.
Notes:

You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use on…*/


class MyQueue {
public:
    stack <int> I,O;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        I.push(x);
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        peek();
        int ans = O.top();
        O.pop();
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        if(O.empty()){
            while(!I.empty()){
                O.push(I.top());
                I.pop();
            }
        }
        return O.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return I.empty() && O.empty();
    }
};

/**
 …
