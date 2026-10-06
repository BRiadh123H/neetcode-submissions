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
    ListNode* last(ListNode* head)
    {
        while (head->next->next!=nullptr)
        {
            head=head->next;
            
        }
        ListNode* inter=head->next;
        head->next=nullptr;
        return inter;
    }
    int longu (ListNode* head)
    {
        int k=0;
        while (head->next!=nullptr)
        {
            head=head->next;
            k++;
        }
        return k;
    }
    void reorderList(ListNode* head) {
        if ((head==nullptr)|| (head->next==nullptr)||(head->next->next==nullptr))
            return;
        else
        {
            ListNode* inter=head;
            int n=longu(inter)/2;
           
            while (n--)
            {
                ListNode* dernier=last(inter);
                dernier->next=inter->next;
                inter->next=dernier;
                if (inter->next->next!=nullptr)
                    inter=inter->next->next;

            }
            return;
        } 
    }
};
