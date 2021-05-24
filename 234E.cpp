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
    ListNode * rev(ListNode *first)
    {
        ListNode * p;
        p = first;
        ListNode *q= nullptr;
        ListNode *r= nullptr;
        while(p!=nullptr)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    
       ListNode* midd(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr) return head;
        
        ListNode* slow = head; ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // If we have an odd number of elements skip over the middle element
        if (fast != nullptr) slow = slow->next;
        
        return slow;
    }
    
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        ListNode *midhalf=rev(midd(head));
       
        while(midhalf && head)
        {   
            if(midhalf->val!=head->val)
                return false;
            midhalf=midhalf->next;
            head=head->next;
        }
        return true;
        
    }
};
