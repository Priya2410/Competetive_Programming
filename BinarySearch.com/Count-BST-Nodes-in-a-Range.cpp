https://binarysearch.com/problems/Count-BST-Nodes-in-a-Range

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
// int count=0;
int solve(Tree* root, int lo, int hi) {
   if(root==nullptr)
   return 0;
   else
   {
       if(root->val>=lo && root->val<=hi)
       return 1+solve(root->left,lo,hi)+solve(root->right,lo,hi);
       else 
       return solve(root->left,lo,hi)+solve(root->right,lo,hi);

   }
}
