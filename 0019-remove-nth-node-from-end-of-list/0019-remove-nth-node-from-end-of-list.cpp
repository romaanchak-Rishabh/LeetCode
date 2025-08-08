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
        int c=0;
        ListNode* temp = head;
        while(temp!=NULL) {
            temp=temp->next;
            c++;
        }
        if(c==1 && n==1) {
            head=NULL;
            return head;
        }
        int i=0;
        temp=head;
        if(c-n==0) {
            head=temp->next;
            return head;
        }
        while(i<c-n-1) {
            temp=temp->next;
            i++;
        }
        if(temp->next->next==NULL) {
            temp->next=NULL;
            return head;
        }
        else {
            temp->next=temp->next->next;
            return head;
        }
    }
};