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
    ListNode* middleNode(ListNode* head) {
        ListNode * ptr = head;
        int c=0;
        while(ptr!=NULL){
            c++;
            ptr=ptr->next;
        }
        
        c=(c/2) +1;
        
        ListNode* ptr2 = head;
        int i=0;
    while(ptr2){
        if(i==(c-1)){
            break;
        }
        i++;
        ptr2 = ptr2->next;
        
    }
        return ptr2;
    }
};