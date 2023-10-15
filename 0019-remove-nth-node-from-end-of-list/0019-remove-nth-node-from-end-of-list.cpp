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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        ListNode* prev = head;
        if(head->next==NULL && n==1){
            return NULL;
        }
        
        
       while(n && temp->next!=NULL){
           
           n--;
           
           
           temp=temp->next;
       }
        
        while(temp->next!=NULL){
            prev=prev->next;
            temp=temp->next;
        }
        if(prev==head && n==1){return prev->next;}
        prev->next=prev->next->next;
        return head;
    }
};