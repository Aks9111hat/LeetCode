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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        
        ListNode* temp = head;
        ListNode* lst;
        while(temp){
            n++;
            lst=temp;
            temp=temp->next;
            
        }
        if(n==0) return head;
        k=k%n;
        if(k==0){
            return head;
        }
        temp=head;
        k=n-k-1;
        while(k){
            k--;
            
            temp=temp->next;
        }
        lst->next=head;
        head=temp->next;
        temp->next=NULL;
        
        
        
        
        
        return head;
    }
};