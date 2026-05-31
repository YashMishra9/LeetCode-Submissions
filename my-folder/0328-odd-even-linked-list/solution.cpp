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
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int>arr={};
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp){
            arr.push_back(temp->val);
        }


        ListNode* temp1=head->next;
        while(temp1!=NULL && temp1->next!=NULL){
            arr.push_back(temp1->val);
            temp1=temp1->next->next;
        }
        if(temp1){
            arr.push_back(temp1->val);
        }

        int i=0;
        ListNode* temp2=head;
        while(temp2!=NULL){
            temp2->val=arr[i];
            temp2=temp2->next;
            i++;
        }
        return head;
    }
};
