class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    void push(int x) {
       s1.push(x); 
    }
    int pop() {
        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        //s1.swap(s2);
        return x;
        }
    int peek() {
        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
        }
    bool empty() {
       return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */


2:
Implement stack using queue
//Implement Stack Using Queues leetcode
class MyStack {
public:
queue<int>q1;
    MyStack() {
        
    }
    
    void push(int x) {
         q1.push(x);
        
    }
    
    int pop() {
        queue<int>q2;
        int size=q1.size()-1;
        for(int i=0;i<size;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int x = q1.back();
        q1.pop();
        // q1=q2;
        // while(!q2.empty()){
        //     q2.pop();
        // }
        q1.swap(q2);
        return x;
        
    }
        
    
    int top() {
        return q1.back();
        
    }
    
    bool empty() {
       return q1.empty();
        
    }
};
