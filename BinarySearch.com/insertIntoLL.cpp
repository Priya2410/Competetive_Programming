// https://binarysearch.com/problems/Insert-Into-Linked-List

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head, int pos, int val) {
    LLNode* temp=new LLNode();
    temp->val=val;
    temp->next=nullptr;
    if(head==nullptr){
    head=temp;
    return head;
    }
    else if(pos==0){
    LLNode* h=head->next;
    temp->next=head;
    head->next=h;
    head=temp;
    return head;
    }
    else{
        LLNode* h=head;
        for(int i=0;i<pos-1;i++){
            h=h->next;
        }
        temp->next=h->next;
        h->next=temp;
    }
    return head;
}
