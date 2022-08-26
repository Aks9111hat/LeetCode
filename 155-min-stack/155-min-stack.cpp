class Node{
    public:
    int currValue;
    int currMin;
    Node * next ;
    
    Node (int currValue , int currMin){
        this->currValue = currValue;
        this->currMin = currMin;
        this->next = NULL;
    }
};

class MinStack {
    private:
 Node * head;

    
    public:
    MinStack() {
        head = NULL;

    }
    
    void push(int val) {
    
        if(head == NULL){
            Node * temp = new Node(val , val);
            head = temp;
        }
        else{
            Node * temp = new Node(val , min(val , head->currMin));
            temp->next = head;
            head = temp;
        }
   
    }
    
    void pop() {
   
        Node * temp = head;
        head = head->next;
        delete(temp);
  
    }
    
    int top() {
        return head->currValue;
    }
    
    int getMin() {
        return head->currMin;
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