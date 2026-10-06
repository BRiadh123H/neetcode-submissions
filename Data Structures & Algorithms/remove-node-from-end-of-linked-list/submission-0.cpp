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
int longu (ListNode* head)
    {
        int k=0;
        while (head!=nullptr)
        {
            head=head->next;
            k++;
        }
        return k;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if ((head==nullptr)|| (head->next==nullptr))
            return nullptr;
        ListNode * inter =head;
        int d=longu(inter);
        int k=d-n+1;
        cout << d<<" "<<n<<" "<<k;
        if (k==1)
        {
            return head->next;
        }
        k--;
        while (k!=1)
        {
            inter=inter->next;
            k--;
        }
        inter->next=inter->next->next;
        return head;
    }
};
