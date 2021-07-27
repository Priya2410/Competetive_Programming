// https://binarysearch.com/problems/Palindrome-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* node) {
    int n=0;
    LLNode* head=node;
    if(node==nullptr){
        return true;
    }
    while(node!=nullptr){
        n=n+1;
        node=node->next;
    }
    int a[n];
    for(int i=0;head!=nullptr;i++){
        a[i]=head->val;
        head=head->next;
    }
    for(int i=0;i<=n/2;i++){
        if(a[i]!=a[n-1-i])
        return false;
    }
    return true;
}
