vector<int>inorder(TreeNode* root){
    vector<int>ans;
    stack<TreeNode*>st;
    st.push(root);
    TreeNode* temp=root;
    while(true){
        if(temp){
            st.push(temp);
            temp=temp->left;
        }else{
            if(st.empty()){
                break;
            }
            TreeNode* temp=st.top();
            st.pop();
            ans.push(temp->val);
            temp->right;
        }
    }
    return ans;
}