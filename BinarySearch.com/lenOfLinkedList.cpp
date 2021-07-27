// https://binarysearch.com/problems/Length-of-a-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) 
{
    int len=0;
    while(node!=NULL){
            len=len+1;
            node=node->next;
        }
    return len;
}
