/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev,*curr,*temp;
        
        while(head && head->val==val){
            curr=head;
            head=head->next;
            delete(curr);
        }
       if(head==NULL) return head;
        prev=head;
        curr=head->next;
        while(curr){
            if(curr->val==val){
                temp=curr;
                prev->next=curr->next;
                curr=curr->next;
                delete(temp);
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
              
            
        }
    
};