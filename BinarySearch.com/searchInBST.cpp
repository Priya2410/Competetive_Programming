// https://binarysearch.com/problems/Search-in-a-Binary-Search-Tree

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int val) {
    if(root==nullptr)
    return false;
    while(root!=nullptr){
        if(root->val==val)
        return true;
        else if(val>root->val)
        root=root->right;
        else
        root=root->left;
    }
    return false;
}
