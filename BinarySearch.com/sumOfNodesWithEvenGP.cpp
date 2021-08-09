// https://binarysearch.com/problems/Sum-of-Nodes-with-Even-Grandparent-Values

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void getSum(Tree *curr,Tree *p,Tree *gp,int &sum){
    if(curr==nullptr)
    return;
    if(gp!=nullptr && gp->val%2==0){
        sum=sum+curr->val;
    }
    getSum(curr->left,curr,p,sum);
    getSum(curr->right,curr,p,sum);
}
 
int solve(Tree* root) {
    if(root==nullptr)
    return 0;
    int sum=0;
    getSum(root,nullptr,nullptr,sum);
    return sum;
}
