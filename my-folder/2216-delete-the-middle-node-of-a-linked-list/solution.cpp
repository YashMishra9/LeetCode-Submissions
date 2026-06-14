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
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        ListNode* temp1=head;
        int mid=(cnt/2);
        while(temp1!=NULL){
            mid--;
            if(mid==0){
                temp1->next=temp1->next->next;
                // delete temp1->next;
            }
            temp1=temp1->next;
        }
        return head;
    }
};
