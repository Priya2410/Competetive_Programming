// https://binarysearch.com/problems/Reverse-a-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if (node == nullptr) {
        return node;
    }
    LLNode* agla= node->next;
    LLNode* curr= node;
    LLNode* prev= nullptr;
    while(curr!=nullptr){
        agla=curr->next;
        curr->next=prev;
        prev=curr;
        curr=agla;
    }
    return prev;
}
