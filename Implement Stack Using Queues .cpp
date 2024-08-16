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
