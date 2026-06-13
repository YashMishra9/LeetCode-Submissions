/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        map<Node*,Node*>mpp;
        while(temp!=NULL){
            Node* newNode=new Node(temp->val);
            mpp[temp]=newNode;
            temp=temp->next;
        }
        Node* temp1=head;
        while(temp1!=NULL){
            Node* copyNode=mpp[temp1];
            copyNode->next=mpp[temp1->next];
            copyNode->random=mpp[temp1->random];
            temp1=temp1->next;
        }
        return mpp[head];
    }
};
