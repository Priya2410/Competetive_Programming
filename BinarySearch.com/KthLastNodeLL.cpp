// https://binarysearch.com/problems/Kth-Last-Node-of-a-Linked-List

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k) {
    vector<int> v;
    while(node!=nullptr)
    {
        v.push_back(node->val);
        node=node->next;
    }
    return v[v.size()-1-k];
}
