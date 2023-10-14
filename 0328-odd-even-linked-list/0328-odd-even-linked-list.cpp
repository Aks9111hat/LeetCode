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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode*odd = new ListNode(0);
        ListNode*even =new ListNode(0);
        
        ListNode* os = odd;
        ListNode* es = even;
        int num = 1;
        ListNode* forward;
        while(head){
            forward = head->next;
            if(num%2){
                odd->next = head;
                head->next = NULL;
                odd = odd->next;
            }
            else{
                even->next = head;
                head->next = NULL;
                even = even->next;
            }
            num++;
            head = forward;
        }
        
        os = os->next;
        es = es->next;
        odd->next = es;
        
        return os;
        
    }
};