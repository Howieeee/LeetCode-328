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
        if(head == NULL)
            return head;
        if(head->next == NULL)
            return head;
        if(head->next->next == NULL)
            return head;
    
        auto odd = head->next->next, even = head->next;
        
        ListNode* ans = head ;
        ans->next = NULL;
        auto ptr = ans;
        //cout << odd->val;
        while(odd){
            ptr->next = new ListNode(odd->val);
            ptr = ptr->next;
             if(odd->next)
                odd = odd->next;
             else
                 break;
             if(odd->next)
                odd = odd->next;
             else
                break;
        }
        
        while(even){
            ptr->next = new ListNode(even->val);
            ptr = ptr->next;
            if(even->next)
                even = even->next;
            else
                break;
            if(even->next)
                even = even->next;
            else
                break;
        }
        
        return ans;
    }
};
