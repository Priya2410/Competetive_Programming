// https://binarysearch.com/problems/Binary-Search-Tree-Validation
vector<int> v;
void inorder_trav(Tree* root){
    if(root==NULL)
    return ;
    else
    {
        inorder_trav(root->left);
        v.push_back(root->val);
        inorder_trav(root->right);
    }
}
bool solve(Tree* root) 
{
    int count=0;
    if(root==nullptr)
    return true;
    inorder_trav(root);
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1])
        {
            v.clear();
            return false;
        }
    }
    v.clear();
    return true;
}