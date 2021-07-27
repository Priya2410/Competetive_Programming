// https://binarysearch.com/problems/Tree-Sum
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if(root==NULL)
    return 0;
    else
    return root->val+solve(root->left)+solve(root->right);
}
