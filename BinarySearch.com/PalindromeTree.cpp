// https://binarysearch.com/problems/Palindromic-Tree
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
bool solve(Tree* root) {
    v.clear();
    vector<int>v1=inorder(root);
    for(int i=0;i<=v1.size()/2;i++){
        if(v1[i]!=v1[v1.size()-1-i])
        return false;
    }
    return true;
}
