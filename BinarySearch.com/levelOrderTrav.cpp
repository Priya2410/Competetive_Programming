// https://binarysearch.com/problems/Level-Order-Traversal
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

vector<int> solve(Tree* root) {
    vector<int> v;
    if(root==nullptr)
    return v;
    else
    {
        queue<Tree*>q;
        q.push(root);
        while(q.empty()==false){
            Tree *ele=q.front();
            v.push_back(ele->val);
            q.pop();
            if(ele->left!=nullptr)
            q.push(ele->left);
            if(ele->right!=nullptr)
            q.push(ele->right);
        } 
    }
    return v;
}