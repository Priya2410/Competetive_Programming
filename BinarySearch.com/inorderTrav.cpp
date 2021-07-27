// https://binarysearch.com/problems/Inorder-Traversal
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> v;
vector<int> inorder(Tree* root){
    if(root==nullptr)
    return v;
    else
    {
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    return v;
}
vector<int> solve(Tree* root) {
    v.clear();
    vector<int>v1=inorder(root);
    return v1;
}
