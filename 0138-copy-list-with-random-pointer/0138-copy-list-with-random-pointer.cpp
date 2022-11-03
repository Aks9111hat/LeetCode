/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node* tmp = head;
        while(tmp!=NULL){
            Node* newNode = new Node(tmp->val); 
            newNode->next = tmp->next;
            tmp->next = newNode;
            tmp = tmp->next->next; // eql to tmp = tmp->next
            
        }
        
        // now conn random ptrs for Node' guys
        tmp = head; 
        while(tmp!=NULL){
            if(tmp->random !=NULL)
                tmp->next->random = tmp->random->next; // A'->next = Random->next (Random')
            else
                tmp->next->random = NULL;
            
            tmp=tmp->next->next;
        }
        
        // now all conns are done
        // bring back the org list and separate both
        
        //to store the new LL
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        tmp = head;
        while(tmp != NULL){
            tail->next= tmp->next;
            tail = tmp;
            tmp->next = tail->next;
            tmp = tail->next;
        }
        
        return dummy->next;
    }
};