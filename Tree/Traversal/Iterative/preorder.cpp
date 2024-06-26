vector<int>preorder(TreeNode* root){
    vector<int>ans;
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
        TreeNode* temp=st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }
    return ans;
}