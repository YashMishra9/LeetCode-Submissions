class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int midNode=(cnt/2)+1;
        ListNode* temp1=head;
        while(temp1!=NULL){
            midNode--;
            if(midNode==0){
                break;
            }
            temp1=temp1->next;
        }
        return temp1;
    }
};
