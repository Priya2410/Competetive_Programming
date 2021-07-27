
// https://binarysearch.com/problems/A-Strictly-Increasing-Linked-List

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    if(head==nullptr)
    return true;
    while(head->next!=nullptr){
        if((head->next->val<head->val) || (head->next->val==head->val))
        return false;
        head=head->next;
    }
    return true;
}
