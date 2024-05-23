vector<int>postorder(TreeNode* root){
    vector<int>ans;
    stack<TreeNode*>st1,st2;
   
    st1.push(root);
    while(!st1.empty()){
       TreeNode* temp=st1.top();
       st2.push_back(temp);
       st1.pop();
       if(temp->left){
        st1.push(temp->left);
       }
       if(temp->right){
        st1.push(temp->right);
       }
    }
    while(!st2.empty()){
        temp=st2.top();
        st2.pop();
        ans.push_back(temp->val);
    }
    return ans;
}