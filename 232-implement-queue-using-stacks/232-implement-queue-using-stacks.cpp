class MyQueue {
public:
     stack<int> s1;
        stack<int> s2;
    MyQueue() {
       
    }
    
    void push(int x) {
       s1.push(x);
        
    }
    
    int pop() {
         if(s1.size() == 0)
            return -1;
        
        while(!s1.empty())
        {
            s2.push(s1.top());
            
            s1.pop();
        }
         int val = s2.top();
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
             s2.pop();
        }
         return val;
        
    }
    
    int peek() {
        if(s1.size() == 0)
            return -1;
        
        while(!s1.empty())
        {
            s2.push(s1.top());
            
            s1.pop();
        }
         int val = s2.top();
        
        // store back the all the elements of st2 into st1
        
        while(!s2.empty())
        {
            s1.push(s2.top());
            
            s2.pop();
        }
        
        return val;
    }
    
    bool empty() {
       
        return s1.size()==0;
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