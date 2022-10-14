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
   ListNode* deleteMiddle(ListNode* head) {
        ListNode* p; int i = 0;
        p = head;
        while(p != NULL){    // find its length
            i++;
            p = p-> next;
        }
        i = i/2;
        p = head;
        if(i==0){
            return NULL;
        }
        else{
        for( int j= 1; j <= i; j++){    // delete the middle node
            if(j==i){
                p-> next = p-> next -> next;
                break;
            }
            p = p-> next;
        }
        }
        return head;
    }
};