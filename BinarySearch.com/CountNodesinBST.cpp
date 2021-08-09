// https://binarysearch.com/problems/Count-Nodes-in-Complete-Binary-Tree

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if(root==nullptr)
    return 0;
    else
    return 1+solve(root->left)+solve(root->right);
}
