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
        ListNode* temp=head;
        int cnt=0;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }

        if(cnt==n){
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }
        int res=cnt-n;
        ListNode* temp1=head;
        while(temp1!=NULL){
            res--;
            if(res==0){
                temp1->next=temp1->next->next;
            }
            else{
                temp1=temp1->next;
            }
        }
        return head;
    }
};
