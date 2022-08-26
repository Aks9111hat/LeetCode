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
    
    ListNode* ln = new ListNode();
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = ln;
        int v1,v2;
        int car = 0;
        int dsum;
        while(l1!=NULL || l2!=NULL || car){
            if(l1){
                v1=l1->val;
            }else v1=0;
            
            if(l2){
                v2=l2->val;
            }else v2=0;
            
            dsum = v1+v2+car;
            car = dsum/10;
            dsum = dsum%10;
            head->next = new ListNode(dsum);
                
            head = head->next;
            if(l1){
                l1=l1->next;
            }else NULL;
            if(l2){
                l2=l2->next;
            }else NULL;
        }
        return ln->next;
    }
};